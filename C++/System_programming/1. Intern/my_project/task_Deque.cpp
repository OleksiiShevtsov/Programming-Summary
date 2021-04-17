#include <iostream>
using namespace std;
const int sizeDataNode = 4;

template <typename T>
class Deque{
	public:	
		Deque(){

		}
		void insert(T data){
			
		}
		
		void print(){
			
		}
		
		int GetSize(){
			return m_size;
		}
		
		void PushBack(T data){//вставляет элемент в хвост
			Node<T>* curNode = m_tail;
			if(m_size%sizeDataNode == 0){
				if(m_size == 0){
					curNode = m_head;
					curNode = new Node(data);
					m_size++;
				}else{
					curNode = new Node(data);
					m_tail = curNode->pNext;
					m_size++;
				}
			}else{
				curNode->data[m_size%sizeDataNode] = data;
				m_size++;
			}
		}
		void PushFront(){//вставляет элемент с головы
			
		}
		
		~Deque(){
			
		}
		
	private:
		
		template<typename TN>
		struct Node{
				
			Node(TN data){
				this->data[0] = data;
			}
				
			TN* data[sizeDataNode];
			Node* pNext = 0;
			Node* pPrev = 0;
			
		};
		
		Node<T>* m_head = 0;
		Node<T>* m_tail = 0;
		int m_size = 0;
};

int main(){

	Deque<int> newList;
	for(int i; i < 7; i++){
		newList.PushBack(10*i);
	}
	
	
	
	
	return 0;
}
