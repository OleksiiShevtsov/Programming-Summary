#include <iostream>

using namespace std;

template <typename T>
class List{
	public:	
		void insert(T data){
			
				if(m_head == 0){
					m_head = new Node<T>(data);
					m_size++;
				}else{
					
					Node<T>* curNode = m_head;
					
					for(int i = 0; i < m_size - 1; i++){
						curNode = curNode->pNext;
					}
					
					curNode->pNext = new Node<T>(data);
					m_size++;
				}
		}
		
		void print(){
			Node<T>* curNode = m_head;
			
			for(int i = 0; i < m_size; i++){
				
				cout << curNode->data << endl;
				
				curNode = curNode->pNext;
			}	
		}
		
		int GetSize(){
			return m_size;
		}
		
	private:
		
		template<typename TN>
		struct Node{
				
				Node(TN data){
					this->data = data;
				}
				TN data;
				Node<TN>* pNext = 0;
		};
		
		Node<T>* m_head = 0;
		int m_size = 0;
};

int main(){

	List<int> newList;
	
	newList.insert(100);
	cout << newList.GetSize() << endl;
	newList.insert(200);
	cout << newList.GetSize() << endl;
	newList.insert(300);
	cout << newList.GetSize() << endl;
	newList.print();
	
	cout << newList.GetSize() << endl;
	
	return 0;
}
