#include <iostream>
#include <string>

using namespace std;

int main(){
	
	const int fieldMaxX = 7, fieldMaxY = 7;
	int x1 ,x2, y1, y2;
	bool b = true;
	
	cout <<"Enter x1: "; cin >> x1;
	cout <<"Enter y1: "; cin >> y1;	
	cout <<"Enter x2: "; cin >> x2;
	cout <<"Enter y2: "; cin >> y2;
	
	if(x1 > fieldMaxX || x2 > fieldMaxX || y1 > fieldMaxY || y2 > fieldMaxY){
		cout <<"Error"<< endl;
		return 0;
	}
	
	int arrX[9];
	int arrY[9];
	
	arrX[0] = x1 + 1;
	arrX[1] = x1 + 2;
	arrX[2] = x1 + 2;
	arrX[3] = x1 + 1;
	arrX[4] = x1 - 1;
	arrX[5] = x1 - 2;
	arrX[6] = x1 - 2;
	arrX[7] = x1 - 1;
	
	arrY[0] = y1 + 2;
	arrY[1] = y1 + 1;
	arrY[2] = y1 - 1;
	arrY[3] = y1 - 2;
	arrY[4] = y1 - 2;
	arrY[5] = y1 - 1;
	arrY[6] = y1 + 1;
	arrY[7] = y1 + 2;
	
	for(int i = 0; i < 8; i++){
		if(*(arrX + i) == x2 && *(arrY + i) == y2){
			cout << "Yes" << endl;
			b = false;
			break;
		}
	}
	if(b){
		cout << "No" << endl;
	}
	
	return 0;
}

	/*
	int A[3] = {3, 0, 7};
	int* B;
	int** C;
	C = &B;//C = B
	B = A + 2;//B = A2
	B --;//B = A1
	(*B)--;//A1 = -1
	**C = **C + 3;//A1 = 2
	
	A[0] = A[1];//A0 = 2 
	A[1] = *(B - 1) + *A;//A1 = 2 + 1 // 4*/
