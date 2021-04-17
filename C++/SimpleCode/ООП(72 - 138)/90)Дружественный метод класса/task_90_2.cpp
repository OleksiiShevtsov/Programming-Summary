#include <iostream>
using namespace std;

class PointXY;

class PointZ {
	public:
		PointZ(int z){
			this->z = z;
		}
		void Print(const PointXY& pPointXY);
	private:
		int z = 0;
};

class PointXY {
	public:
		PointXY(int x, int y){
			this->x = x;
			this->y = y;
		}
	private:
		int x = 0;
		int y = 0;
		
	friend void PointZ::Print(const PointXY& pPointXY);
};

int main(){
	
	PointXY Axy(10, 20);
	PointZ Az(30);
	
	Az.Print(Axy);
	
	return 0;
}

void PointZ::Print(const PointXY& pPointXY){
	cout <<"x :"<< pPointXY.x << endl;
	cout <<"y :"<< pPointXY.y << endl;
	cout <<"z :"<< z << endl;
}

