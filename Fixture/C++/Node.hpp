#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <iomanip>

using namespace std;

template<class T>
class Node;

template<class T>
ostream &operator<<(ostream &out, const Node<T>& n);

template<class T>
class Node {

    private:
        Node<T> *next;
        T data;

    public:

        Node();
        Node(const T& d);
        
        Node<T>* getNext() const;
        T* getData() const;
        void setNext(Node<T> *newNext);

        friend ostream &operator<< <> (ostream &out, const Node<T>& n);

};

template<class T>
ostream &operator<<(ostream &out, const Node<T>& n){
    out << *(n.data) ; 
    return out;
};
/*....DO NOT EDIT ....*/

/* TO-DO: method implementations below */
template<class T>
Node<T>::Node(){
	next = NULL;
	 data = new T();
}
template<class T>
Node<T>::Node(const T& d){ next = NULL; data = new(d);  }

template<class T>
Node<T>* Node<T>::getNext() const {return this->next;}

template<class T>
T* Node<T>::getData() const {return this->data;}

template<class T>
void Node<T>::setNext(Node<T> *newNext){this->next=newNext;}

#endif
