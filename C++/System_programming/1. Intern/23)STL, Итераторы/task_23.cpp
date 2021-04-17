#include <iostream>
#include <iterator>
#include <list>
#include <vector>

template <typename T>
struct Node
{
    Node* next{ 0 };
    T data;
};

template <typename DataType>
class Iterator {
public:
    Iterator(Node<DataType>* data) :
        m_data(data) {}

    Iterator operator++() {
        m_data = m_data->next;
        return m_data;
    }

    DataType& operator*() {
        return m_data->data;
    }
    bool operator != (const Iterator& it) {
        return m_data != it.m_data;
    }

private:
    Node<DataType>* m_data = 0;
};

template <typename DataType>
class List
{
private:
    typedef Node<DataType> node;
public:
    typedef Iterator<DataType> iterator;

    void PushBack(const DataType& data)
    {
        node* newNode = new node;

        newNode->data = data;
        newNode->next = 0;

        if (m_head == 0) {
            m_head = newNode;
            m_tail = m_head;
        }
        else
        {
            m_tail->next = newNode;
            m_tail = m_tail->next;
        }

        ++m_count;
    }

    int Length() const
    {
        return m_count;
    }

    iterator Begin() {
        return iterator(m_head);
    }

    iterator End() const {
        return iterator(0);
    }

    ~List() {
        for (node* it = m_head; it; ) {
            node* nodeToDelete = it;
            it = it->next;
            delete nodeToDelete;
        }
    }

private:
    
    int m_count{ 0 };
    node* m_tail{ 0 };
    node* m_head{ 0 };
};


int main()
{
    List<double> list;

    for (List<double>::iterator it = list.Begin(); it != list.End(); ++it) {
        std::cout << *it << std::endl;
    }
    return 0;
}
