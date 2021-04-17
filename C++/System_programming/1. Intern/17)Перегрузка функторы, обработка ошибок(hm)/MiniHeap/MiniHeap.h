#ifndef MINIHEAP_H
#define MINIHEAP_H

struct Node {
	char* start = nullptr;
	int size = 0;
	bool isFree = true;
	Node* pNext = nullptr;
	Node* pPrev = nullptr;
};

class MiniHeap
{
	public:
		MiniHeap(int size);
		void *alloc(int memSize);
		void free(void* ptr);

	private:
		void AddNodeAfter(Node* after, Node* newNode);
		Node* FindeFreeBlock(int size);

		char* m_memHeap;
		int m_sizeHeap;
		Node* m_headNode;
};

#endif // MINIHEAP_H
