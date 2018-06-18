# csci1113 Lecture Notes
## Lecture 1
Everything in C works in C++  
Keyword list is bigger, pg 6 C++.pdf  
Same basic structure, but C has a better way of generating output.
```C++
#include <iostream> // Replaced stdio, you can still use stdio though
using namespace std; // Allows use of cout instead of blahblahsirtypesalot

int main( )
{
  cout << "Hello world!";
  return 0;
}
```
For using C libs, you can also do ```<cstdio>``` to emphasize the C ness.  
Also ```endl = \n``` so ```cout << x << endl``` prints whatevers in x and then a new line.  
C does integer constants by default.  
```C++
x = 0xAF;
cout << "x = " << x << endl;
x = 0257;
cout << "x = " << x << endl;
x = 175;
cout << "x = " << x << endl;
```
The ```const``` keyword makes it a read-only variable which means the compiler has your back, like ```#define``` in C, but more powerful, protects you from yourself (but not from hackers).  
Type conversion is done with function notation, ie ```float(x)``` means ```(float)x``` in C++  
In C++ functions like sizeof return a double, but format can give you something else, C++.pdf pg 16  
C++ can do structs, pg 20 C++.pdf  
C++ has inline functions, which drops the code right in for a function, can help with speed, pg 24, Inline functions need the whole function definition  
The C++ compiler is called on the command line using ```g++ program.cpp``` it defaults to a just like C. You can set up a make file and do things.  
C++ has reference parameters, pg 34, which let you do things like the pointer swap function, but it does the work for you.  
C++ we make the compiler do more work  
pg 45, we can do weird things?  

