//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.6 on page 249
//  A String class

#include <iostream>
using namespace std;

class String
{ public:
    String(short =0);                   // default constructor
    String(const char*);                // constructor
    String(const String&);              // copy constructor
    ~String() { delete [] data; }       // destructor
    int length() const { return len; }  // access function
    char* convert() { return data; }    // access function
    char character(short i) { char c = data[i]; return c; }
    void print() { cout << data; }
  private:
    short len;     // number of (non-null) characters in string
    char* data;    // the string
};

void test(String);

int main()
{ String s1;
  test(s1);
  String s2(6);
  test(s2);
  String s3("ABCDEFG");
  test(s3);
  
}

String::String(short size) : len(size)
{ 	data = new char[len+1];
	  for (int i=0; i < len; i++) data[i] = ' ';
	  data[len] = '\0';
}

String::String(const char* str) : len(strlen(str))
{ data = new char[len+1];
	  memcpy(data, str, len+1);
}

String::String(const String& str) : len(str.len)
{ data = new char[len+1];
	  memcpy(data, str.data, len+1);
}

void test(String s)
{ int len=s.length();
  cout << "s.length() = " << len << ";\t";
  if (len>3) cout << "s.character(3) = \'" << s.character(3) << "\';\t";
  cout << "s = \"";
  s.print();
  cout << "\"\n";
}
