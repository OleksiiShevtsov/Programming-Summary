#include <iostream>

using namespace std;

class String {
	public:
		String() {
			
		}
		String(const char* str) {
			Clear();
			m_size = Size(str) + 1;
			m_buf = new char[m_size];
			for(int i = 0; i < m_size - 1; i++){
				m_buf[i] = str[i];
			}
			m_buf[m_size] = '\0';
		}
		String(const String& other) {	
			Clone(other);
		}
		~String() {
			Clear();
		}
		String& operator=(const String& other) {
			Clear();
			Clone(other);
			return *this;
		}
		bool operator!() {
			
			return !m_size;
		}
		bool operator==(const String& other){
			
			return m_size == other.m_size;
		}
		String& operator+(const String& other){
			char * temp = m_buf;
			m_buf = new char[other.m_size + m_size];
			for(int i = 0; i < m_size; i++){
				m_buf[i] = temp[i];
			}	
			for(int i = 0; i < m_size; i++){
				m_buf[i + m_size] = other.m_buf[i];
			}
			delete [] temp;
			m_size = m_size + other.m_size;
			return *this;
		}
		char& operator[](const int& index){
			
			return m_buf[index];
		}
		ostream& operator << (ostream& os) {
			int i = 0;
			while (m_buf[i] == '\0'){
				i++;
				os << m_buf[i];
				return os;
			}
		}
	private:
		void Clone(const String& other) {
			this->m_buf = new char[other.m_size];
			this->m_size = other.m_size;
			for (int i = 0; i < other.m_size; i++) {
				this->m_buf[i] = other.m_buf[i];
			}
		}
		void Clear() {
			if (m_buf) {
				delete[] m_buf;
				m_buf = 0;
				m_size = 0;
			}
		}
		int Size(const char* str){
			for(int i = 0; ; i++){
				if(str[i] == '\0'){
					return i;
				}
			}
		}
		char* m_buf = 0;
		int m_size = 0;
};

int main() {

	String str = "Alex";
	
	cout << str;
	
	return 0;
}
