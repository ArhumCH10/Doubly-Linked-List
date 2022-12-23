#include"Header.h"
#include<iostream>
using namespace std;


template<class Type>
DLL<Type>::DLL()
{
	Head = NULL;
}

template<class Type>
DLL<Type>::~DLL()
{
	delete Head;
	Head = NULL;
}

template<class Type>
void DLL<Type>::insertAtFirst(Type val){
	Node<Type> * temp = new Node<Type>;
	temp->data = val;
	temp->pre = NULL;
	temp->next = NULL;
	if (Head != NULL)
	{
		temp->next = Head;
		Head->pre = temp;
		Head = temp;

	}
	else
	{
		Head = temp;
	}
}

template<class Type>
void DLL<Type>::insertAtLast(Type val){
	Node<Type> * temp = new Node<Type>;
	temp->data = val;
	temp->pre = NULL;
	temp->next = NULL;
	if (Head != NULL)
	{
		Node<Type> * t = Head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = temp;
		temp->pre = t;

	}
	else
	{
		Head = temp;
	}

}

template<class Type>
int DLL<Type>::removeFromFirst(){
	if (Head == NULL)
	{
		cout << "Doubly LinkList Empty\n";
		return INT_MIN;
	}
	else
	{
		Node<Type> * del = Head;
		Head = Head->next;
		int	v = del->data;
		free(del);
		return v;
	}
}

template<class Type>
int DLL<Type>::removeFromLast()
{
	if (Head == NULL)
	{
		cout << "Doubly Linked List is Empty" << endl;
		return INT_MIN;
	}
	else
	{
		Node<Type>* del = Head;

		while (del->next != NULL)
		{
			del = del->next;
		}
		int v = del->data;
		Node<Type> * t = del->pre;
		t->next = NULL;
		free(del);
		return v;
	}
}

template<class Type>
void  DLL<Type>::insertAtPosition(Type value, int pos)
{
	if (pos == 1)
	{
		insertAtFirst(value);
	}
	else
	{
		Node<Type>* temp = Head;
		int c = 1, flag = 0;;
		while (temp != NULL)
		{
			if (c == pos)
			{
				temp = temp->pre;
				Node<Type> * ptr = new Node<Type>;
				ptr->data = value;
				Node<Type> *t1 = temp;
				t1 = t1->next;

				temp->next = ptr;
				ptr->pre = temp;

				ptr->next = t1;
				t1->pre = ptr;
				flag++;
			}
			temp = temp->next;
			c++;

		}

		if (!flag)
		{
			cout << "Position is greater than total DLL size\n";
		}

	}


}

template<class Type>
bool DLL<Type>::Search(Type v){

	if (Head == NULL)
	{
		cout << "Value Not found !!!\n";
		return false;
	}
	else
	{
		int c = 0;
		Node<Type> *temp = Head;
		while (temp->next !=NULL )
		{
			c++;
			if (v==temp->data )
			{
				cout<<"value found at "<< c << " node \n";
				return true;
			}
			temp = temp->next;
		}

	}
}

template<class Type>
void DLL<Type>::Display(){
	Node<Type> * temp = Head;
	cout << "Doubly Linklist :";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
