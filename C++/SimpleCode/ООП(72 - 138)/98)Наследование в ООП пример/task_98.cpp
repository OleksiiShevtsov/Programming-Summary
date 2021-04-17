#include <iostream>
#include <string>
using namespace std;

class Human{
	public:
		string GetName (){
			return name; 
		}
		void SetName(string name){
			this->name = name;
		}
	private:
		string name;
};

class Student : public Human{
	public:
		string group;
		void Learn(){
			cout <<"I stud"<< endl;
		}
};

class ExtramuralStudent : public Student{
	public:
		void Learn(){
			cout <<"I study less often"<< endl;
		}
};

class Professor : public Human{
	public:
		string subject;	
};

int main(){
	
	Student student;
	student.SetName("Alex");
	cout << student.GetName() << endl;
	student.Learn();
	
	ExtramuralStudent extraStudent;
	extraStudent.SetName("Jak");
	cout << extraStudent.GetName() << endl;
	extraStudent.Learn();
	
	return 0;
}
