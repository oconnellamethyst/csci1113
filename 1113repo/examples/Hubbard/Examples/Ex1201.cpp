//  Programming with C++, Second Edition, by John R. Hubbard
// Copyright McGraw-Hill 2000
// Example 12.1, page 273
// A Person Class

#include <iostream>
using namespace std;
#include <string>

class Person
{
public:
  Person(char* n="", char* nat="U.S.A.", int s=1)
    : name(n), nationality(nat), sex(s) {}
  void printName() { cout << name; }
  void printNationality() { cout << nationality; }
private:
  string name, nationality;
  int sex;
};

int main()
{
  Person creator("Bjarne Stroustrup", "Denmark");
  cout << "The creator of C++ was ";
  creator.printName();
  cout << ", who was born in ";
  creator.printNationality();
  cout << ".\n";
} 
