//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.7, page 309
//  A List Class Template

#include <iostream>
#include <string>
using namespace std;

template<class T>
class List;             // forward reference

template <class T>
class ListNode
{   friend class List<T>;
  public:
    ListNode(T& t, ListNode<T>* p) : data(t), next(p) { }
  protected:
    T data;          // data field
    ListNode* next;  // points to next node in list
};

template<class T>
class List
{ public:
    List() : first(0) { }
    ~List();
    void insert(T t);                    // insert t at front of list
    int remove (T& t);                   // remove first item t in list
    bool isEmpty() { return (first==0); }
    void print();
  protected:
    ListNode<T>* first;
    ListNode<T>* newNode(T& t, ListNode<T>* p)
    { ListNode<T>*q = new ListNode<T>(t,p); return q; }
};

int main()
{ List<string> friends;
  friends.insert("Bowen, Van");
  friends.insert("Dixon, Tom");
  friends.insert("Mason, Joe");
  friends.insert("White, Ann");
  friends.print();
  string name = "White, Ann";
  friends.remove(name);
  cout << "Removed: " << name << endl;
  friends.print();
}

template<class T>
List<T>::~List()
{ ListNode<T>* temp;
  for (ListNode<T>* p = first; p; )   // traverses list
    {
      temp = p;
      p = p->next;
      delete temp;
    }
}

template<class T>
void List<T>::insert(T t)
{ ListNode<T>* p = newNode(t, first);
  first = p;
}

template<class T>
int List<T>::remove(T& t)
{ if (isEmpty()) return 0;   // flag to signal no removal
  t = first->data;           // data value returned by refrence
  ListNode<T>* p = first;
  first = first->next;       // advance first pointer to remove node
  delete p;
  return 1;                  // flag to signal successful removal
}

template<class T>
void List<T>::print()
{ for (ListNode<T>* p=first; p; p=p->next)
    cout << p->data << " -> ";
  cout << "*\n";
}
