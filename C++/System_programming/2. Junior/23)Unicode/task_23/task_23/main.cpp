#include <iostream>
#include <icu.h>
#include <string>
#include <fstream>

using namespace std;

int main() {


	cout << "\r\n" << endl;
	//���������
	//utf8, utf16, utf32 ...

	const char16_t utf16Str[] = u"������";
	UErrorCode errCode = {};
	char buf[100] = {};
	int32_t dstLen = 0;

	//����������� � utf-8
	char* c = u_strToUTF8(buf,
		sizeof(buf),
		&dstLen,
		utf16Str,
		-1,
		&errCode
		);

	//������ � ����
	ofstream file("E://programming//C++//System programming//Junior//23)Unicode//task_23//task_23//file.txt", ios::binary);
	file.write(buf, dstLen);

	return 0;
}