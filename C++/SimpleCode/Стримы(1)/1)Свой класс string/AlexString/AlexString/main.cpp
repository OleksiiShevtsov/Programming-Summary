#include <iostream>
using namespace std;
	
/*
**����**

-������� ���������, ������ �������
-����������� �����������
*/

class AlexString {
public:

	//�����������  �� ���������
	AlexString() {
		cout << "default constructor - " << this << endl;
		
		str = nullptr;

		length = 0;
	}

	//����������� 
	AlexString(const char *str) {
		cout << "constructor - " << this << endl;
		
		//������ ������
		length = strlen(str);
		
		//��������� ������ ��� ������ 
		this->str = new char[length + 1];
		
		for (int i = 0; i < length; i++) {
			//������������ � this->str ���� ��������
			this->str[i] = str[i];
		}
		//���������� � ����� �������������
		this->str[length] = '\0';
	}

	//����������� �����������
	AlexString(const AlexString& str) {
		cout << "copy constructor - " << this << "(" << &str << ")" << endl;

		length = strlen(str.str);

		this->str = new char[length+1];

		for (int i = 0; i < length; i++) {
			this->str[i] = str.str[i];
		}
		this->str[length] = '\0';
	}

	//����������
	~AlexString() {
		cout << "destructor - " << this << endl;

		//������������ ������ ������
		delete[] str;
	}

	//����� ������ (�������)
	void Print() {
		cout << str << endl;
	}

	//���������� ��������� ������������
	AlexString& operator= (const AlexString& str) {
		cout << "operator= - " << this << "(" << &str << ")" << endl;
		
		if (this->str != nullptr) {
			delete[] this->str;
		}
		length = strlen(str.str);
		this->str = new char[length + 1];
		for (int i = 0; i < length; i++) {
			this->str[i] = str.str[i];
		}
		this->str[length] = '\0';

		return *this;
	}

	//���������� ��������� �������� (������������ �����)
	AlexString operator+ (const AlexString& str) {
		cout << "operator+ - " << this << "(" << &str << ")" << endl;
		
		AlexString newStr;
		
		int thisLength = strlen(this->str);
		int otherLength = strlen(str.str);

		newStr.length = thisLength + otherLength;

		newStr.str = new char[thisLength + otherLength + 1];

		int i = 0;
		for (; i < thisLength; i++) {
			newStr.str[i] = this->str[i];
		}
		for (int j = 0; j < otherLength; j++, i++) {
			newStr.str[i] = str.str[j];
		}
		newStr.str[thisLength + otherLength] = '\0';
		return newStr;
	}

	//�������� ���������� ==
	bool operator==(const AlexString& str) {
		if (this->length != str.length) {
			return false;
		}
		 
		for (int i = 0; i < this->length; i++){
			if (this->str[i] != str.str[i]) {
				return false;
			}
		}

		return true;
	}

	//�������� ���������� !=
	bool operator!=(const AlexString& str) {
		//���������������
		return !(this->operator==(str));
	}

	char& operator[](int index) {
		return this->str[index];
	}

	//-����� ���� ������
	/*ostream& operator<< (ostream& os, const AlexString& str) {//�����
	int i = 0;
	while (str.str[i] == '\0'){
	i++;
	os << str.str[i];
	return os;
	}
	}*/

	//����������� �����������:  ???
	//���������� ��� ���� ��� ��� ������������ �� ���������� ����������� �����������
	//������ ��� ����������� ����
	AlexString(AlexString&& str) {
		cout << "Move Designer - " << this <<"("<< &str <<")"<< endl;

		this->length = str.length;
		this->str = str.str;

		//��� ���� ��� �� ���������� �� ���� ������ 
		//��������� ��������� ����������
		str.str = nullptr;
	}

	//����� ������
	int Length() {

		return length;
	}

private:

	char *str;

	int length;
};

int main() {

	AlexString str1("Alex");
	AlexString str2("String");

	AlexString str3;

	str3 = str1 + str2;

	str3.Print();

	return 0;
}