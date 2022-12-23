#include<iostream>

template<class Type>
class Node
{
public:
	int data;
	Node<Type>* next; // Pointer to next Node in DLL
	Node<Type>* pre; // Pointer to previous Node in DLL
};
template<class Type>
class DoublyLinkedList
{
private:
	Node<Type>*Head;
public:

	virtual void insertAtFirst(Type) = 0;
	virtual void insertAtLast(Type) = 0;
	virtual Type removeFromFirst() = 0;
	virtual Type removeFromLast() = 0;

	DoublyLinkedList()
	{
		Head = NULL;
	}
};