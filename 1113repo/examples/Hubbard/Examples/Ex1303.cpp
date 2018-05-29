//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 13.3, page 303
//  A Stack Class Template

#include <iostream>
using namespace std;

template <class T>
class Stack
{
public:
  Stack(int s = 100) : size(s), top(-1) { data = new T[size]; }
  ~Stack() { delete [] data; }
  void push(const T& x) { data[++top] = x; }
  T pop() { return data[top--]; }
  int isEmpty() const { return top == -1; }
  int isFull() const { return top == size - 1; }
private:
  int size;
  int top;
  T* data;
};

int main()
{
  Stack<int> intStack1(5);
  Stack<int> intStack2(10);
  Stack<char> charStack(8);
  intStack1.push(77);
  charStack.push('A');
  intStack2.push(22);
  charStack.push('E');
  charStack.push('K');
  intStack2.push(44);
  cout << intStack2.pop() << endl;
  cout << intStack2.pop() << endl;
  if (intStack2.isEmpty()) cout << "inStack2 is empty.\n";
}
