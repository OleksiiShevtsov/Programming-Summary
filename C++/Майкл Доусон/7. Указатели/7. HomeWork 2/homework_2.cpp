#include <iostream>
#include <string>
using namespace std;
int main()
{
	string obj = "object";
	string* pObj = &obj;
	string** pObj2 = &pObj;
	
	cout << pObj2 <<endl;
	cout << pObj <<endl;
	return 0;
}

