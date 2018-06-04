//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Person.h
//  Interface and implementation for a Person class

#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

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

 



