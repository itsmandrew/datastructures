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
        SNode<E>* head;
};


template <typename E>
class SNode {
    private:
        E elem;
        SNode<E>* next;
        friend class SLinkedClass<E>;
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
{ while (!empty()) removefront(); }

template <typename E>
void SLinkedList<E>::addFront(const E& e)
{
    SNode<E>* v = new SNode<E>;
    v->elem = e;
    v->next = head;
    head = v;
}

template <typename E>
void SLinkedList<E>::removeFront()
{   SNode<E>* old = head;
    head = old->next;
    delete old;
}


int main()
{
    SLinkedList<int> a;
    a.addFront(3);

    std::cout << a.front() << std::endl;
    return 0;
}