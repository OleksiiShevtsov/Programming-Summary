#include "MiniHeap.h"

int main()
{
	MiniHeap mem(10);

	int* ptr1 = static_cast<int*>(mem.alloc(sizeof(int)));

	*ptr1 = 100;

	mem.free(ptr1);
}