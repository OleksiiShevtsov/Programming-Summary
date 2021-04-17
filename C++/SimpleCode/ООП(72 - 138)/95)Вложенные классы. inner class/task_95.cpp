#include <iostream>
#include <string>
using namespace std;

class Image {
	public:
		void GetImageInfo(){
			for(int i = 0; i < LENGHT; i++){
				cout <<"#"<< i <<" ";
				pixels[i].GetInfo();
			}
		}
		
		//вложенный класс
		class Pixel{
			//не имеет доступа к внешнему классу
			//внешний класс в свою очередь имеет
			//доступ к внутреннему классу 
			public:
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
		
	private:
		
		static const int LENGHT = 5;
		
		Pixel pixels[LENGHT]{
			Pixel(0, 0, 0),
			Pixel(10, 10, 10),
			Pixel(20, 20, 20),
			Pixel(30, 30, 30),
			Pixel(40, 40, 40)
		};
};

int main(){
	
	Image img;
	img.GetImageInfo();
	
	//Доступ к вложенному классу 
	//при условии что вложенный класс
	//находиться в public секции
	Image::Pixel pixel(50, 50, 50);
	pixel.GetInfo();
	
	return 0;
}
