#include/*подключение библеотеки (перед компил€цией)*/ <iostream>
#define PI 3.14//определить
#define tab "\t"
#define Then { 
#define EndIf }

using namespace std;

int main(){
	cout << PI << endl;
	
	//опасность! не сможем в таком случае вызвать некую функцию begin()
	
	for(int i = 0; i < 5; i++) Then
			
			cout << i << endl;
			
	EndIf
	
	
	return 0;
}
