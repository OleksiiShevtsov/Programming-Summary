#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

	double ax, ay, az, bx, by, bz;
	cin >> ax; 
	cin >> ay;
	cin >> az;
	cin >> bx;
	cin >> by; 
	cin >> bz;
	
	/*
	if ((sqrt(bx * bx + by * by + bz * bz)) < 1E-8) {
		return 0;
	}
	if ((sqrt(ax * ax + ay * ay + az * az)) < 1E-8) {
		return 0;
	}*/

	cout << setiosflags(ios::fixed)<< setprecision(8) << (sqrt( pow((ay * bz - az * by), 2) + pow(-(ax * bz - az * bx), 2) + pow((ax * by - ay * bx), 2)))/2;
	

	return 0;
}
