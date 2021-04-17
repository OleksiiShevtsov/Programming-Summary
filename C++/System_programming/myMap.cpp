#include <iostream>

using namespace std;

template <typename T>
class Map{
	
	template<typename TN>
	struct Node{
			
		Node(TN data){
			this->data = data;
		}
		TN data;
		Node<TN>* pNext = 0;
		Node<TN>* pPrev = 0;
	};

	Node<T>* m_head = 0;
	Node<T>* m_tail = 0;
	int m_size = 0;
};

int main(){

	Map<int> newMap;
	
	
	
	return 0;
}
