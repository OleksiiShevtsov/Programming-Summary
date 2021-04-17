// Демонстрирует подстановку функций
#include <iostream>
int radiation(int health);
using namespace std;
int main(){
	int health = 80;
	cout <<"Your health is "<<health<<"\n\n";
	health = radiation(health);
	cout <<"After radiation exposure your health is "<<health<<"\n\n";
	health = radiation(health);
	cout <<"After radiation exposure your health is "<<health<<"\n\n";
	health = radiation(health);
	cout <<"After radiation exposure your health is "<<health<<"\n\n";
return 0;
}
/*функцию предназначенная для подстановки*/
inline int radiation(int health){
	return (health / 2);
}
