#include"Header1.h"
template<class Type>
class DLL :public DoublyLinkedList<Type>
{
public:
	DLL();
	~DLL();
	void insertAtFirst(Type);
	void insertAtLast(Type);
	int removeFromFirst();
	void insertAtPosition(Type, int pos);
	int removeFromLast();
	bool Search(Type);
	
	void Display();
private:
	Node<Type> *Head;
};
