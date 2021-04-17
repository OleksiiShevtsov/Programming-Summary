/*#include <iostream>
#include <openssl/evp.h>
#include <openssl/aes.h>
#include <openssl/err.h>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
void handleErrors(void)
{
	unsigned long errCode;

	printf("An error occurred\n");
	while (errCode = ERR_get_error())
	{
		char* err = ERR_error_string(errCode, NULL);
		printf("%s\n", err);
	}
	abort();
}
int encrypt(unsigned char* plaintext, int plaintext_len, unsigned char* aad,
	int aad_len, unsigned char* key, unsigned char* iv,
	unsigned char* ciphertext, unsigned char* tag)
{
	EVP_CIPHER_CTX* ctx = NULL;
	int len = 0, ciphertext_len = 0;

	// Create and initialise the context 
	if (!(ctx = EVP_CIPHER_CTX_new())) handleErrors();

	// Initialise the encryption operation
	if (1 != EVP_EncryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL))
		handleErrors();

	// Set IV length if default 12 bytes (96 bits) is not appropriate 
	if (1 != EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 16, NULL))
		handleErrors();

	// Initialise key and IV
	if (1 != EVP_EncryptInit_ex(ctx, NULL, NULL, key, iv)) handleErrors();

	// Provide any AAD data. This can be called zero or more times as
	// required
	if (aad && aad_len > 0)
	{
		if (1 != EVP_EncryptUpdate(ctx, NULL, &len, aad, aad_len))
			handleErrors();
	}

	// Provide the message to be encrypted, and obtain the encrypted output.
	// EVP_EncryptUpdate can be called multiple times if necessary
	if (plaintext)
	{
		if (1 != EVP_EncryptUpdate(ctx, ciphertext, &len, plaintext, plaintext_len))
			handleErrors();

		ciphertext_len = len;
	}

	//Finalise the encryption. Normally ciphertext bytes may be written at
	//this stage, but this does not occur in GCM mode
	if (1 != EVP_EncryptFinal_ex(ctx, ciphertext + len, &len)) handleErrors();
	ciphertext_len += len;

	// Get the tag
	if (1 != EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_GET_TAG, 16, tag))
		handleErrors();

	// Clean up
	EVP_CIPHER_CTX_free(ctx);

	return ciphertext_len;
}

int decrypt(unsigned char* ciphertext, int ciphertext_len, unsigned char* aad,
	int aad_len, unsigned char* tag, unsigned char* key, unsigned char* iv,
	unsigned char* plaintext)
{
	EVP_CIPHER_CTX* ctx = NULL;
	int len = 0, plaintext_len = 0, ret;

	// Create and initialise the context
	if (!(ctx = EVP_CIPHER_CTX_new())) handleErrors();

	// Initialise the decryption operation.
	if (!EVP_DecryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL))
		handleErrors();

	// Set IV length. Not necessary if this is 12 bytes (96 bits) 
	if (!EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 16, NULL))
		handleErrors();

	// Initialise key and IV
	if (!EVP_DecryptInit_ex(ctx, NULL, NULL, key, iv)) handleErrors();

	// Provide any AAD data. This can be called zero or more times as
	// required
	if (aad && aad_len > 0)
	{
		if (!EVP_DecryptUpdate(ctx, NULL, &len, aad, aad_len))
			handleErrors();
	}

	// Provide the message to be decrypted, and obtain the plaintext output.
	// EVP_DecryptUpdate can be called multiple times if necessary
	if (ciphertext)
	{
		if (!EVP_DecryptUpdate(ctx, plaintext, &len, ciphertext, ciphertext_len))
			handleErrors();

		plaintext_len = len;
	}

	// Set expected tag value. Works in OpenSSL 1.0.1d and later
	if (!EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_TAG, 16, tag))
		handleErrors();

	// Finalise the decryption. A positive return value indicates success,
	// anything else is a failure - the plaintext is not trustworthy.
	ret = EVP_DecryptFinal_ex(ctx, plaintext + len, &len);

	// Clean up
	EVP_CIPHER_CTX_free(ctx);

	if (ret > 0)
	{
		// Success
		plaintext_len += len;
		return plaintext_len;
	}
	else
	{
		// Verify failed
		return -1;
	}
}

//AES криптование
int main()
{
	unsigned char key[] = "01234567890123456789012345678901";

	// A 128 bit IV 
	unsigned char iv[] = "0123456789012345";

	// Message to be encrypted
	unsigned char plaintext[] = "The quick brown fox jumps over the lazy dog";

	// Some additional data to be authenticated
	unsigned char aad[] = "Some AAD data";

	// Buffer for ciphertext. Ensure the buffer is long enough for the
	// ciphertext which may be longer than the plaintext, dependant on the
	// algorithm and mode
	unsigned char ciphertext[128];

	// Buffer for the decrypted text
	unsigned char decryptedtext[128];

	// Buffer for the tag 
	unsigned char tag[16];

	int decryptedtext_len = 0, ciphertext_len = 0;







	ifstream ifile("E:\\programming\\C++\\System programming\\Junior\\13)openssl\\TestEncrypt.cpp", ios::binary);//читать
	ofstream ofile("E:\\programming\\C++\\System programming\\Junior\\13)openssl\\writeFile.txt", ios::binary);//писать

	cout << "ifile size: " << ifile.tellg() << endl;

	//вычитать
	ifile.seekg(0, ifile.end);
	size_t fileSize = ifile.tellg();
	ifile.seekg(0, ifile.beg);
	vector<unsigned char> plainText(fileSize);
	ifile.read(reinterpret_cast<char*>(plainText.data()), fileSize);

	//криптование
	vector<unsigned char> cipherData(fileSize + AES_BLOCK_SIZE);
	ciphertext_len = encrypt(plainText.data(), plainText.size(), aad, sizeof(aad), key, iv, &cipherData[0], tag);

	//запись
	ofile.write(reinterpret_cast<char*>(cipherData.data()), ciphertext_len);
	ofile.close();

	//вычитать повторно
	ifstream iEncryptFile("E:\\programming\\C++\\System programming\\Junior\\13)openssl\\writeFile.txt", ios::binary);//читать
	iEncryptFile.seekg(0, iEncryptFile.end);
	fileSize = iEncryptFile.tellg();
	iEncryptFile.seekg(0, iEncryptFile.beg);
	vector<unsigned char> encText(fileSize);
	iEncryptFile.read(reinterpret_cast<char*>(encText.data()), fileSize);

	//Декрипт
	vector<unsigned char> plainData(fileSize);
	decryptedtext_len = decrypt(encText.data(), encText.size(), aad, sizeof(aad), tag, key, iv, plainData.data());
	cout << reinterpret_cast<char*>(plainData.data()) << endl;


	return 0;





	// Decrypt the ciphertext
	decryptedtext_len = decrypt(ciphertext, ciphertext_len, aad, sizeof(aad), tag, key, iv, decryptedtext);

	if (decryptedtext_len < 0) {
		// Verify error
		printf("Decrypted text failed to verify\n");
	}
	else {
		// Add a NULL terminator. We are expecting printable text
		decryptedtext[decryptedtext_len] = '\0';

		// Show the decrypted text
		printf("Decrypted text is:\n");
		printf("%s\n", decryptedtext);
	}

	// Remove error strings
	ERR_free_strings();

	return 0;
}*/