// Programming with C++ by John R. Hubbard
// Copyright McGraw-Hill 2000
// Example 12.4, page 276
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

class Student : public Person
{
public:
  Student(char* n, int s=0, char* i="")
    : Person(n,s), id(i), credits(0) { }
  void setDOM(int m, int  d, int y) { dom.setDate(m, d, y); }
  void printDOM() { cout << dom; }
private:
  string id;          // student identification number
  Date dom;           // date of matriculation
  int credits;        // course credits
  float gpa;          // grade-point average
};
