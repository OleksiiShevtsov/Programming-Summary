#include <iostream>
#include <windows.h>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//��������� ������� �� ����� (��� �� � ������ ��������)
	HANDLE event = OpenEventA(EVENT_MODIFY_STATE, TRUE, "MyEvent");
	SetEvent(event);

	return 0;
}
