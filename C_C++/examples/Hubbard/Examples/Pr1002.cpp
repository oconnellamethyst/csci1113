//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.2 on page 249
//  A Stack class

#include <cmath>
#include <iostream>
using namespace std;

class Stack
{ public:
    Stack(int s=10) : size(s), top(-1) { a = new int[size]; }
    ~Stack() { delete [] a; }
    void push(const int& item) { a[++top] = item; }
    int pop() { return a[top--]; }
    bool isEmpty() const { return top == -1; }
    bool isFull() const { return top == (size-1); }
  private:
    int size;  // size of array
    int top;   // top of stack
    int* a;    // array to hold stack items
};

int main()
{ Stack s;
  s.push(44);
  s.push(77);
  s.push(22);
  while (!s.isEmpty())
  { int x = s.pop();
    cout << " " << x;
  }
}
