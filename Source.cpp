#include"Source1.cpp"
#include<iostream>
using namespace std;
int main(){
	DLL<int> l;
	l.insertAtFirst(5);
	l.insertAtFirst(6);
	l.insertAtFirst(53);
	l.insertAtFirst(55);
	l.insertAtFirst(8);
	l.insertAtLast(100);
	l.insertAtLast(150);

	l.Display();
	l.removeFromFirst();
	l.removeFromFirst();
	l.Display();
	l.removeFromLast();
	l.removeFromLast();
	l.Display();
	l.insertAtPosition(9878, 2);
	l.Display();

	l.Search(6);

	return 0;
}