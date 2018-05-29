//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.11(b), page 284
//  Polymorphism through virtual Functions

#include <iostream>
using namespace std;

class Person
{
public:
  Person(char* s)
  { name = new char[strlen(s)+1]; strcpy(name, s);
  }
  virtual void print()
  { cout << "My name is " << name << ".\n";
  }
protected:
  char* name;
};

class Student : public Person
{
public:
  Student(char* s, float g) : Person(s), gpa(g) { }
  void print()
  { cout << "<y name is " << name
         << " and my G.P.A. is " << gpa << ".\n";
  }
private:
  float gpa;
};

class Professor : public Person
{
public:
  Professor(char* s, int n) : Person(s), publs(n) { }
  void print()
  { cout << "My name is " << name
         << " and I have " << publs << " publications.\n";
  }
private:
  int publs;
};

int main()
{
  Person* p;
  Person x("Bob");
  p = &x;
  p->print();
  Student y("Tom", 3.47);
  p = &y;
  p->print();
  Professor z("Ann", 7);
  p = &z;
  p->print();
}
