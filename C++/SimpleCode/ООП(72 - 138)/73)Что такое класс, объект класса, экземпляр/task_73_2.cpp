#include <iostream>
#include <string>

using namespace std;

class Point{
	public:
		int x;
		int y;
		int z;
};

int main(){
	
	Point o;
	o.x = 10;
	o.y = 20;
	o.z = 30;
	
	cout <<"o("<< o.x <<", "<< o.y <<", "<< o.z <<");"<< endl;
	
	return 0;
}
