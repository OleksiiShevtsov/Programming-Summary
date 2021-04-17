#include <iostream>

using namespace std;

template <typename T>
class Vector{
	public:	
		Vector(){
			m_size = 0;
			m_data = new T[0];
		}
		Vector(const int& size){
			m_size = size;
			m_data = new T[m_size];
		}
		~Vector(){
			m_size = 0;
			delete[] m_data;
		}
		void push_back(T data){	
			T* dataTemp = new T[m_size];
			
			for(int i = 0; i < m_size; i++){
				dataTemp[i] = m_data[i];
			}
			
			delete[] m_data;
			m_size++;
			m_data = new T[m_size];
			
			for(int i = 0; i < m_size - 1; i++){
				m_data[i] = dataTemp[i];
			}
			m_data[m_size - 1] = data;
			
			delete[] dataTemp;
		}
		void push_f(T data){	
			T* dataTemp = new T[m_size];
			
			for(int i = 0; i < m_size; i++){
				dataTemp[i] = m_data[i];
			}
			
			delete[] m_data;
			m_size++;
			m_data = new T[m_size];
			
			for(int i = 0; i < m_size - 1; i++){
				m_data[i + 1] = dataTemp[i];
			}
			m_data[0] = data;
			
			delete[] dataTemp;
		}
		void pop_back(){
			T* dataTemp = new T[m_size - 1];
			
			for(int i = 0; i < m_size - 1; i++){
				dataTemp[i] = m_data[i];
			}
			
			delete[] m_data;
			m_size--;
			m_data = new T[m_size];
			
			for(int i = 0; i < m_size; i++){
				m_data[i] = dataTemp[i];
			}
			delete[] dataTemp;
		}
		void insert(const int& position, const T& value){
			T* dataTemp = new T[m_size];
			
			for(int i = 0; i < m_size; i++){
				dataTemp[i] = m_data[i];
			}
			
			delete[] m_data;
			m_size++;
			m_data = new T[m_size];
			
			for(int i = 0; i < m_size; i++){
				if(i == position){
					m_data[i] = value;
					
					for(int j = i; j < m_size - 1; j++){
						m_data[j + 1] = dataTemp[j];
					}
					break;
				}
				
				m_data[i] = dataTemp[i];
			}
			
			delete[] dataTemp;
		}
		T& operator[](int& index){
			return m_data[index];
		}
		int getSize(){
			return m_size;
		}
		
	private:
		int m_size;
		T* m_data;
};

int main(){

	Vector<int> vec;
	

	vec.push_f(300);
	vec.push_f(200);
	vec.push_f(100);

	for(int i = 0; i < vec.getSize(); i++){
		cout << vec[i] << endl;
	}
	
	return 0;
}
