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
  
## Lecture 2
**Class** - Category/Type of thing  
**Object** - Example/instance of a class  
**Attribute** - An object's data  
**Method** - An object's function  
  
pg 71, we can create types and makes things do things. :: is a scope operator  
When I travel, I don't lose my ability to speak. When you ask for a complest, you get the whole package, it travels as a unit, unlike in C, so that make things easier, so it keeps that class, so pg 73, it moves things.  

I am an object class human, I have certain characteristics that are public information like my hair color, but you don't know the pin number to my bank account, it is not public, it is restricted. With classes, by default, everything inside is private. In a structure, it's public. Re and Im can't be changed directly, pg 75. You can call print and multiply, you have access to certain things.  
We're interested in control, so that the programmer doesn't make mistakes. Classes are defence mechanisms against yourself and others.  
A constructor builds things, it contructs things, pg. 82  
It's subtle, it's not magic.  
Default constructor, pg 84, you can just kind of let the compiler do the work  
Static members pg 94, static members shared by all objects of the class, independant of any object.
Encapsulation, wrapping the objects with the methods.  
Methods, ways of doing things.  
With an objet oriented programming language like C++, it mirrors the real world.  
Access notation, access using the . operator.  
Like malloc, pg 95
