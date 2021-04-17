#include "Human.h"
#include "Student.h"

int main() {

	Student student;
	student.SetName("Alex");
	cout << student.GetName() << endl;
	student.Learn();

	return 0;
}