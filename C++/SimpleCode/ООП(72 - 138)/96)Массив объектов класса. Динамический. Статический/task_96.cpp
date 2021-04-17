#include <iostream>
#include <string>
using namespace std;

class Pixel{
	public:
		Pixel(){
			r = g = b = 0;
		}
		Pixel(int r, int g, int b){
			this->r = r;
			this->g = g;
			this->b = b;
		}
		void GetInfo(){
			cout <<"Pixel: r("<< r <<"), g("<< g <<"), b("<< b <<")"<< endl;
		}
	private:
		int r;
		int g;
		int b;
};

int main(){
	
	const int LENGTH = 5;
	
	//статические масивы
	Pixel pixelArray[LENGTH];
	pixelArray[0].GetInfo();
	
	pixelArray[0] = Pixel(1, 1, 1);
	pixelArray[0].GetInfo();
	
	cout << endl;
	//динамические масивы
	int LENGTH2 = 5;
	
	Pixel* pixelArray2 = new Pixel[LENGTH2];
	pixelArray2[0] = Pixel(2, 2, 2);
	pixelArray2[0].GetInfo();
	
	delete[] pixelArray2;
	pixelArray2 = 0;
	
	return 0;
}
