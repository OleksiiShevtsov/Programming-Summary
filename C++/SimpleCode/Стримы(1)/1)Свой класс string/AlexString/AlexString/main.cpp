#include <iostream>
using namespace std;
	
/*
**План**

-Перебор єлементов, замена символа
-Конструктор перемещения
*/

class AlexString {
public:

	//конструктор  по умолчанию
	AlexString() {
		cout << "default constructor - " << this << endl;
		
		str = nullptr;

		length = 0;
	}

	//конструктор 
	AlexString(const char *str) {
		cout << "constructor - " << this << endl;
		
		//размер строки
		length = strlen(str);
		
		//выделение памяти для строки 
		this->str = new char[length + 1];
		
		for (int i = 0; i < length; i++) {
			//присваивание в this->str всех символов
			this->str[i] = str[i];
		}
		//добовление в конце нультерминант
		this->str[length] = '\0';
	}

	//конструктор копирования
	AlexString(const AlexString& str) {
		cout << "copy constructor - " << this << "(" << &str << ")" << endl;

		length = strlen(str.str);

		this->str = new char[length+1];

		for (int i = 0; i < length; i++) {
			this->str[i] = str.str[i];
		}
		this->str[length] = '\0';
	}

	//деструктор
	~AlexString() {
		cout << "destructor - " << this << endl;

		//освобождение памяти масива
		delete[] str;
	}

	//вывод строки (костыль)
	void Print() {
		cout << str << endl;
	}

	//перегрузка оператора присваивание
	AlexString& operator= (const AlexString& str) {
		cout << "operator= - " << this << "(" << &str << ")" << endl;
		
		if (this->str != nullptr) {
			delete[] this->str;
		}
		length = strlen(str.str);
		this->str = new char[length + 1];
		for (int i = 0; i < length; i++) {
			this->str[i] = str.str[i];
		}
		this->str[length] = '\0';

		return *this;
	}

	//перегрузка оператора сложения (конкатенация строк)
	AlexString operator+ (const AlexString& str) {
		cout << "operator+ - " << this << "(" << &str << ")" << endl;
		
		AlexString newStr;
		
		int thisLength = strlen(this->str);
		int otherLength = strlen(str.str);

		newStr.length = thisLength + otherLength;

		newStr.str = new char[thisLength + otherLength + 1];

		int i = 0;
		for (; i < thisLength; i++) {
			newStr.str[i] = this->str[i];
		}
		for (int j = 0; j < otherLength; j++, i++) {
			newStr.str[i] = str.str[j];
		}
		newStr.str[thisLength + otherLength] = '\0';
		return newStr;
	}

	//оператор сравенения ==
	bool operator==(const AlexString& str) {
		if (this->length != str.length) {
			return false;
		}
		 
		for (int i = 0; i < this->length; i++){
			if (this->str[i] != str.str[i]) {
				return false;
			}
		}

		return true;
	}

	//оператор сравенения !=
	bool operator!=(const AlexString& str) {
		//инвертированная
		return !(this->operator==(str));
	}

	char& operator[](int index) {
		return this->str[index];
	}

	//-Вывод ввод строки
	/*ostream& operator<< (ostream& os, const AlexString& str) {//вывод
	int i = 0;
	while (str.str[i] == '\0'){
	i++;
	os << str.str[i];
	return os;
	}
	}*/

	//конструктор перемещения:  ???
	//создаеться дял того что при конкатынации не создавался конструктор копирования
	//тоесть для оптимизации кода
	AlexString(AlexString&& str) {
		cout << "Move Designer - " << this <<"("<< &str <<")"<< endl;

		this->length = str.length;
		this->str = str.str;

		//для того что бы деструктор не стер данные 
		//поскольку указатели одинаковые
		str.str = nullptr;
	}

	//Длина строки
	int Length() {

		return length;
	}

private:

	char *str;

	int length;
};

int main() {

	AlexString str1("Alex");
	AlexString str2("String");

	AlexString str3;

	str3 = str1 + str2;

	str3.Print();

	return 0;
}