#include <iostream>
#include <string>

using namespace std;

class Student{
	private:
		string name;
		string specialization;
		int age;
	public:
		Student(string name, string specialization, int age){
			this -> name = name;
			this -> specialization = specialization;
			this -> age = age;
		}
		
		void ShowStudent(){
			cout <<"name: "<< name <<"; specialization: "<< specialization<<"age: "<< age << endl;
		}
		
		Student(){}
		Student* pNext = 0;
};

class University{
	private:
		Student* head = 0;
		int size = 0;
	public:
		void AddStudent(Student* student){
			if(head == 0){
				head = student;
				size++;
			}else{
				Student* current = head;
				while(current -> pNext != 0){
					current = current -> pNext;
				}
				current -> pNext = student;
				size++;
			}
		}
		void ShowUniversity(){
			Student* current = new Student();
			for(current = head; current; current = current -> pNext){
				current->ShowStudent();
			}
		}
};

int main() {
	
	University ntu;
	
	Student student_1("Alex", "Dev", 23);
	Student student_2("Bill", "QA", 23);
	Student student_3("Bob", "Men", 23);
	
	ntu.AddStudent(&student_1);
	ntu.AddStudent(&student_2);
	ntu.AddStudent(&student_3);
	
	ntu.ShowUniversity();

	return 0;
}
