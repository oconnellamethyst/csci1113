//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.8, page 313
//  An Iterator Class Template for the List Class Template

#include <iostream>
#include <string>
using namespace std;
#include "List.h"
#include "Iterator.h"

template<class T>
class ListIter : public Iterator<T>
{
public:
  ListIter(List<T>& l) : list(l) { reset(); }
  virtual void reset() { previous = NULL; current = list.first; }
  virtual T operator()() { return current->data; }
  virtual void operator=(T t) { current->data = t; }
  virtual int operator!(); // determine whether current exists
  virtual int operator++(); // advance iterator to next item
  void insert(T t); // insert t after current item
  void preInsert(T t); // insert t before current item
  void remove(); // remove current item
protected:
  ListNode<T>* current; // points to current node
  ListNode<T>* previous; // points to previous node
  List<T>& list; // this is the list being traversed
};

template<class T>
int ListIter<T>::operator!()
{
  if (current == NULL) // reset current pointer
    if (previous == NULL) current = list.first;
    else current = previous->next;
  return (current != NULL); // returns TRUE if current exists
}

template<class T>
int ListIter<T>::operator++()
{
  if (current == NULL) // reset current pointer
    if (previous == NULL) current = list.first;
    else current = previous->next;
  else // advance current pointer
  {
    previous = current;
    current = current->next;
  }
  return (current != NULL);
}

template<class T>
void ListIter<T>::insert(T t)
{
 ListNode<T>* p = list.newNode(t,0);
 if (list.isEmpty()) list.first = p;
 else
   {
  p->next = current -> next;
  current -> next = p;
   }
}

template<class T>
void ListIter<T>::preInsert(T t)
{
  ListNode<T>* p = list.newNode(t,current);
  if (current == list.first) list.first = previous = p;
  else previous->next = p;
}

template<class T>
void ListIter<T>::remove()
{
  if (current == list.first) list.first = current->next;
  else previous->next = current->next;
  delete current;
  current = 0;
}

int main()
{
  List<string> friends;
  ListIter<string> it(friends);
  it.insert("Bowen, Van");
  ++it;
  it.insert("Dixon, Tom");
  ++it;
  it.insert("Mason, Joe");
  ++it;
  it.insert("White, Ann");
  ++it;
  friends.print();
  it.reset();
  ++it;
  it = "Davis, Jim";
  ++it;
  it.remove();
  friends.print();
  if(!it) it.preInsert("Morse, Sam");
  friends.print();
  for (it.reset(); !it; ++it)
    it = "[" + it() + "]";
  friends.print();
}
