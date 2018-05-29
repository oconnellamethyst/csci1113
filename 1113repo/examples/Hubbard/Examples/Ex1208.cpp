//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.8, page 281
//  Parent Constructors and Destructors

#include <iostream>
using namespace std;

class Person
{
public:
  Person(const char* s)
  { name = new char[strlen(s)+1]; strcpy(name, s); }
  ~Person() { delete [] name; }
protected:
  char* name;
};

class Student : public Person
{
public:
  Student(const char* s, const char* m) : Person(s)
  { major = new char[strlen(m)+1]; strcpy(major, m); }
  ~Student() { delete [] major; }
private:
  char* major;
};

int main()
{
  Person x("Bob");
  {
    Student y("Sarah", "Biology");
  }
}
