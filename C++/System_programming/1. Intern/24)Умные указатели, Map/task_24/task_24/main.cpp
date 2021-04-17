#include <iostream>
#include <memory>
#include <map>

using namespace std;

class A {
public:
	void f() {

	}
	~A(){
		cout << "des A" << endl;
	}
};

void foo(const unique_ptr<A> a) {

}

int main() {
	//unique_ptr �������������� ��������

	//shared_ptr ������������� ������������

	unique_ptr<A> a1(new A);
	unique_ptr<A> a2(new A); 

	foo(move(a1));//�������� �������� �� ����� ���������

	//map
	///////////////////////////////
	map<int, int> m;
	m.insert(1, 100);
	m.insert(2, 200);
	m.insert(3, 300);

	map<int, int>::const_iterator it = m.find(2);

	if (it != m.end()) {
		pair<int, int> pair = *it;
		cout << pair.second << endl;
	}

	return 0;
}