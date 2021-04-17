#include <iostream>
#include <vector>

using namespace std;

void printVectorInt(const vector<int> myVector);
void inputVectorInt(vector<int> &myVector);
void reversePrintVectorInt(vector<int> myVector);

int main(){
	
	vector<int> myVector(10);
	inputVectorInt(myVector);
	printVectorInt(myVector);
	reversePrintVectorInt(myVector);
	//��������
	vector<int>::iterator it = myVector.begin();
	*it = 10;
	cout << myVector[0] << endl;
	
	vector<int>::const_iterator it_const;
	it_const = myVector.begin();
	//*it_const = 5; - ����� ������!
	
	//�������� ������������� �� n ����� � �������
	advance(it, 5);
	cout << *it << endl;
	
	//���������� �������� � ������ ����� ��������
	myVector.insert(myVector.begin(), 100);
	cout << *(myVector.begin()) << endl;
	
	//������� ������� �� ���������
	myVector.erase(myVector.begin(), myVector.begin() + 4);
	printVectorInt(myVector);
	
	return 0;
}

//�����
void printVectorInt(const vector<int> myVector){
	cout <<"amount of elements: "<< myVector.size() << endl;
	
	//cbegin(), cend() - ���������� ����������� ��������� (�� �������� � ��� �++)
	for(vector<int>::const_iterator iter = myVector.begin(); iter != myVector.end(); iter++){
		cout <<"myVector = "<< *iter << endl;
	} 
	cout << endl;
}

//����� ������
void reversePrintVectorInt(vector<int> myVector){
	cout <<"amount of elements: "<< myVector.size() << endl;
	
	for(vector<int>::reverse_iterator iter = myVector.rbegin(); iter != myVector.rend(); iter++){
		cout <<"myVector = "<< *iter << endl;
	} 
	cout << endl;
}

//����
void inputVectorInt(vector<int> &myVector){	
	bool ind = true;
	for(vector<int>::iterator iter = myVector.begin(); iter != myVector.end(); iter++){
		if(ind){
			*iter = 1;
			ind = false;
		}else{
			*iter = *(iter - 1) + 1;
		}
	} 
}
