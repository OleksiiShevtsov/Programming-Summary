#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T, int N>
class StaticArray {
public:
	T at(int i) {
		if (i > m_size - 1 || i < 0) {
			throw "lol";
		}
		else {
			return m_data[i];
		}
	}
	//initializer_list
	StaticArray(const initializer_list<T> il) {
		int i = 0;
		for (const auto& el: il) {
			m_data[i] = el;
			++i;
		}
	}
	T& operator[](int i) {
		return m_data[i];
	}
	int size() {
		return m_size;
	}
	bool empty() {
		if (m_size == 0) {
			return true;
		}else{
			return false;
		}
	}
	T* data() {
		return m_data;
	}
private:
	const int m_size = N;
	T m_data[N];
};

int main() {

	StaticArray<int, 3> arr{ 1, 2, 3 };

	for (int i = 0; i < arr.size(); ++i) {
		cout << arr.at(i) << endl;
	}
	
	int exit; cin >> exit;
	return 0;
}