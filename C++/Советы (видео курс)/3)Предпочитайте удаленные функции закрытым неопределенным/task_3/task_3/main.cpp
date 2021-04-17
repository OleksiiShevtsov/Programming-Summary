#include <iostream>
using namespace std;

struct sData
{
	sData() {

	}
	//скрыть реализацию
	//или скрыть в секции private
	sData(sData&) = delete;
	sData &operator =(sData&) = delete;

	int x;
	int y;
};

void f(int) {
	cout << "int" << endl;
}
//явное запрет этой перегрузки
void f(char) = delete;

int main() {

	{
		sData s1;// кпу
		//sData s2 = s1;//кк
		//s1 = s2;//оператор присваивания
	}

	//f('a');//прегрузка запрещена
	f(10);

	int exit; cin >> exit; return 0;
}