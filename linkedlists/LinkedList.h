#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <string>
#include <iostream>


template <typename E>
class SLinkedList{
    public:
        SLinkedList();
        ~SLinkedList();
        bool empty() const;
        const E& front();
        void addFront(const E& e);
        void removeFront();
    
    private:
        struct SNode
        {
            E elem;
            SNode* next;
        };

        SNode* head;
};



template <typename E>
SLinkedList<E>::SLinkedList()
    : head(NULL) { }

template<typename E>
bool SLinkedList<E>::empty() const
{ return head == NULL; }

template <typename E>
const E& SLinkedList<E>::front()
{ return head -> elem; }


template <typename E>
SLinkedList<E>::~SLinkedList()
{ while (!empty()) removeFront(); }

template <typename E>
void SLinkedList<E>::addFront(const E& e)
{
    SNode* v = new SNode;
    v->elem = e;
    v->next = head;
    head = v;
}

template <typename E>
void SLinkedList<E>::removeFront()
{   SNode* old = head;
    head = old->next;
    delete old;
}


#endif