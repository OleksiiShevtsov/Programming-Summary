#include <iostream>
#include <string>

using namespace std;

//пространство имен
//можно помещать все!
namespace firstNs{
	void func(){
		cout <<"func firstNs_1"<< endl;
	}
}

namespace secondNs{
	void func(){
		cout <<"func secondNs_2"<< endl;
	}
}

namespace secondNs{
	void func2(){
		cout <<"func secondNs_3"<< endl;
	}
}

//using - использывать все
using namespace secondNs;

int main(){
	
	//из пространства имен secondNs
	//тут не нужно указывать явно
	func();
	
	//тут нужно указывать явно
	//поскольку нету - using
	firstNs::func();
	
	return 0;
}
