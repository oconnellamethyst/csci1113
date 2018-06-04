//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.5 on page 249
//  A Random class

#include <iostream>
using namespace std;

class Person
{ public:
    Person(char* =0, int =0, int =0);
    ~Person() { delete [] name_; }
    char* name() { return name_; }
    int born() { return yob_; }
    int died() { return yod_; }
    void print();
  private:
    int len_;
    char* name_;
    int yob_, yod_;
};

int main()
{ Person cb("Charles Babbage",1792,1871);
  cb.print();
}

Person::	Person(char* name, int yob, int yod)
  	: len_(strlen(name)), 
	    name_(new char[len_+1]), 
	    yob_(yob), 
	    yod_(yod)
{ memcpy(name_, name, len_+1);
}

void Person::print()
{ cout << "\tName: " << name_ << endl;
  if (yob_) cout << "\tBorn: " << yob_ << endl;
  if (yod_) cout << "\tDied: " << yod_ << endl;
}
