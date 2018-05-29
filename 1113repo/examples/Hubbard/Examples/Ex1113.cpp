//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 11.13 on page 
//  Testing a Node class for linked lists

#include <iostream>
using namespace std;

class Node
{ public:
	Node(int d, Node* p=0) : data(d), next(p) { } 
	int data;
	Node* next;
};

int main()
{ int n;
  Node* p;
  Node* q=0;
  while (cin >> n)
  { p = new Node(n, q);
    q = p;
  }
  for ( ; p->next; p = p->next )
    cout << p->data << " -> ";
  cout << "*\n";
}
