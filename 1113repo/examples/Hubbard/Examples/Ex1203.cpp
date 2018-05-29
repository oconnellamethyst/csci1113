// Programming with C++ by John R. Hubbard
// Copyright McGraw-Hill 2000
// Example 12.3, page 274-5
// Composing the Date Class with the Person Class

#include <iostream>
using namespace std;
#include <string>
#include "Date.h"

class Person
{
public:
  Person(char* n="", int s=0, char* nat="U.S.A.")
    : name(n), sex(s), nationality(nat) { }
  void setDOB(int m, int d, int y) { dob.setDate(m, d, y); }
  void setDOD(int m, int d, int y) {dod.setDate(m, d, y); }
  void printName() { cout << name; }
  void printNationality() { cout << nationality; }
  void printDOB() { cout << dob; }
  void printDOD() { cout << dod; }
private:
  string name, nationality;
  Date dob, dod;              // date of birth, date of death
  int sex;                    // 0=female, 1=male
};

int main()
{
  Person author("Thomas Jefferson", 1);
  author.setDOB(4,13,1743);
  author.setDOD(7,4,1826);
  cout << "The author of the Declaration of Independence was ";
  author.printName();
  cout << ". \nHe was born on ";
  author.printDOB();
  cout << " and he died on ";
  author.printDOD();
  cout << ".\n";
}

 



