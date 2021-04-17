#include <iostream>
using namespace std;

class AlexString{
	public:

		//конструктор  по умолчанию
		AlexString() {
			cout << "call default constructor - " << this << endl;
			str = nullptr;
		}

		//конструктор 
		AlexString(const char *str){
			cout << "call constructor - " << this << endl;
			int length = strlen(str);//размер строки
			this->str = new char[length + 1];//выделение памяти для строки 
			for (int i = 0; i < length; i++) {
				//присваивание в this->str всех символов
				this->str[i] = str[i];
			}
			//добовление в конце нультерминант
			this->str[length] = '\0';
		}

		//деструктор
		~AlexString(){
			//освобождение памяти масива
			cout << "call destructor - " << this << endl;
			delete[] str;
		}

		//вывод строки (костыль)
		void Print() {
			cout << str;
		}

		//перегрузка оператора присваивание
		AlexString& operator= (const AlexString& str) {
			cout << "call an assignment operator - " << this << endl;
			if (this->str != nullptr) {
				delete[] this->str; 
			}
			int lenght = strlen(str.str);
			for (int i = 0; i < lenght; i++) {
				this->str[i] = str.str[i];
			}
			this->str[lenght] = '\0';

			return *this;
		}

		//перегрузка оператора сложения (конкатенация строк)
		AlexString& operator+ (const AlexString& str) {
			AlexString newStr;
			int thisLength = strlen(this->str);
			int otherLength = strlen(str.str);

			newStr.str = new char[thisLength + otherLength + 1];
			
			int i = 0;
;			for (; i < thisLength; i++) {
				newStr.str[i] = this->str[i];
			}
			for (int j = 0; j < otherLength; j++, i++) {
				newStr.str[i] = str.str[j];
			}
			newStr.str[thisLength + otherLength] = '\0';
			return newStr;
		}

		/*ostream& operator<< (ostream& os, const AlexString& str) {//вывод
			int i = 0;
			while (str.str[i] == '\0'){
				i++;
				os << str.str[i];
				return os;
			}
		}*/

	private:
		char *str;
};

int main() {
	
	//AlexString str = strn; для этого нужен конструктор копирования
	AlexString str1("test1");
	AlexString str2("test2");

	str1 = (str1 + str2);
	
	str1.Print();

	cout << endl;

	return 0;
}