#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
class Int{
	public:
		void operator()(int i){//функтор
			m_i = i;
		}
		int getInt(){
			return m_i;
		}
		operator int(){
			return m_i;
		}
		/*bool operator ()(int i){
			retrn true;
		}*/

	private:
		int m_i;
};

int  main()
{
    Int x;
	x(10);  
	//int y = (int)x;
	//cout << y << endl;  
	   
}
