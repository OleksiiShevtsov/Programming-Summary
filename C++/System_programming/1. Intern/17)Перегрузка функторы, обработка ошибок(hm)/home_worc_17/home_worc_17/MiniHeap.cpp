#include <cstdlib>
#include <cassert>
#include <iostream>

#include "MiniHeap.h"

MiniHeap::MiniHeap(int size)
{
	m_sizeHeap = size * 240000;
	m_memHeap = new char[m_sizeHeap];

	if (m_memHeap == NULL) { exit(1); }

	Node* node = new Node{ m_memHeap, size };

	m_headNode = node;
}

void* MiniHeap::alloc(int memSize)
{
	Node* node = FindeFreeBlock(memSize);

	if (node) {
		Node* newNode = new Node{ node->start, memSize, false };
		try {
			AddNodeAfter(node->pPrev, newNode);
		}
		catch (const std::exception& ex) {
			// err
		}
		// split node
		node->size -= memSize;
		node->start += memSize;

		return newNode->start;
	}
	return nullptr;
}

void MiniHeap::free(void* ptr)
{
	for (Node* curNode = m_headNode; curNode; curNode = curNode->next) {
		if (curNode->start == ptr && !curNode->isFree) {
			curNode->isFree = true;
			// merge with next node
			if (curNode->next && curNode->next->isFree) {
				Node* tmpNode = curNode->next;
				if (tmpNode->next) {
					curNode->next = tmpNode->next;
					tmpNode->next->prev = curNode;
				}
				else {
					curNode->next = nullptr;
					delete tmpNode;
				}
			}
			// merge with prew node
			if (curNode->prev && curNode->prev->isFree) {
				curNode->prev->next = curNode->next;
				curNode->next->prev = curNode->prev;
				curNode->prev->size += curNode->size;
				delete curNode;
			}
			break;
		}
	}
}

void MiniHeap::AddNodeAfter(Node *after, Node *newNode)
{
	if (!newNode) {
		// hendle err
		throw std::exception();
	}

	if (!after) {
		if (m_headNode) {
			newNode->next = m_headNode;
		}
		m_headNode = newNode;
	}
	else if (after->next) {
		newNode->next = after->next;
		after->next->prev = newNode;
		after->next = newNode;
		newNode->prev = after;
	}
}

Node *MiniHeap::FindeFreeBlock(int size)
{
	for (Node* curNode = m_headNode; curNode; curNode = curNode->pNext) {
		if (curNode->isFree && curNode->size >= size) {
			return curNode;
		}
	}
	return nullptr;
}

