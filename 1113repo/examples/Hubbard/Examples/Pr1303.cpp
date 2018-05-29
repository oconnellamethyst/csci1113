//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 13.3, page 319
//  Queue Template

#include<iostream>
using namespace std;
#include <string>

template<class T>
class Queue
{
public:
  Queue(int s = 100) : size(s+1), front(0), rear(0)
  {
    data = new T[size]; 
  }
  ~Queue() { delete [] data; }
  void insert(const T& x) { data[rear++ % size] = x; }
  T  remove() { return data[front++ % size]; }
  int isEmpty() const { return front == rear; }
  int isFull() const { return ((rear+1) % size == front); }
private:
  int size, front, rear;
  T* data;
};

int main()
{
  Queue<char> q(3);
  q.insert('A');
  q.insert('B');
  q.insert('C');
  if (q.isFull()) cout << "Queue is full.\n";
  else cout << "Queue is not full.\n";
  cout << q.remove() << endl;
  cout << q.remove() << endl;
  q.insert('D');
  q.insert('E');
  if (q.isFull()) cout << "Queue is full.\n";
  else cout << "Queue is not full.\n";
  cout << q.remove() << endl;
  cout << q.remove() << endl;
  cout << q.remove() << endl;
  if (q.isFull()) cout << "Queue is full.\n";
  else cout << "Queue is not full.\n";
}
