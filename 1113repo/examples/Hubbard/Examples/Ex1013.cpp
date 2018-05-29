//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.13 on page 244
//  A Node class for linked lists

#include <iostream>
using namespace std;

class Node
{ public:
    Node(int d, Node* q=0) : data(d), next(q) { } 
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
  for ( ; p; p = p->next )
    cout << p->data << " -> ";
  cout << "*\n";
}
