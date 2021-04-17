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
		
		//��������� �����
		class Pixel{
			//�� ����� ������� � �������� ������
			//������� ����� � ���� ������� �����
			//������ � ����������� ������ 
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
	
	//������ � ���������� ������ 
	//��� ������� ��� ��������� �����
	//���������� � public ������
	Image::Pixel pixel(50, 50, 50);
	pixel.GetInfo();
	
	return 0;
}
