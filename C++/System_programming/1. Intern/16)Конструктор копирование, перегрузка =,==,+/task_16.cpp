#include <iostream>

using namespace std;

class ByteArray {
	public:
		ByteArray() {
		}
		ByteArray(int size) {
			m_buf = new int[size];
			m_size = size;
			//cout << "the constructor: " << this << endl;
		}
		ByteArray(const ByteArray& other) {	
			Clone(other);
			//cout << "the copy constructor: " << this << endl;
		}
		~ByteArray() {
			Clear();
			//cout << "the destructor: " << this << endl;
		}
		ByteArray& operator=(const ByteArray& other) {
			Clear();
			Clone(other);
			//cout << "the operator=: " << this << endl;
			return *this;
		}
		bool operator!() {
			
			return !m_size;
		}
		bool operator==(const ByteArray& other){
			
			return m_size == other.m_size;
		}
		ByteArray& operator+(const ByteArray& other){
			int * temp = m_buf;
			m_buf = new int[other.m_size + m_size];
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
	private:
		void Clone(const ByteArray& other) {
			this->m_buf = new int[other.m_size];
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
		int* m_buf = NULL;
		int m_size = 0;
};

int main() {

	ByteArray arr1(1);
	ByteArray arr2(arr1);//arr3 = arr1;

	if(arr1 == arr2){
		cout << "true" << endl;
	}
	
	ByteArray arr3 = arr1 + arr2;
	
	
	return 0;
}
