#include <iostream>

using namespace std;

/*enum ABC{
		a = 0, b, c
};

ABC abc(ABC abc){
	
	return abc;
}*/

class A{
	public:
		static void foo(){
			m_i = 11;
			cout <<"foo(): "<< m_i << endl;
		}
		void bar(){
			m_i = 12;
			cout <<"bar(): "<< m_i << endl;
		}
	private:
		static int m_i;
};
int A::m_i = 10;

int main(){
	
	A::foo();
	
	A a;
	a.bar();
	
	//int x = abc(b);
	//cout << x << endl;
	
	return 0;
}
