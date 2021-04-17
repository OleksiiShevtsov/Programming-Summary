	#include <iostream>
	
	using namespace std;
	
	class MiniHeap {//менеджер пам€ти
		// ласс в конструкторе выдел€ет дл€ собственных нужд себе блок 
		//пам€ти 10mb и из него уже alloc выдел€ет блоки небольшого размера.
		public:
			MiniHeap(){
				
			}
			void* alloc (int memSize){//котора€ выдел€ет блок пам€ти нужного размера
					
			}
			free(void*){//принимает указатель который вернулс€ из alloc и освобождает его
				
			}
		private:
			char* data = new char[10];	
	};
	
	int main() {
	
		
		
		return 0;
	}
