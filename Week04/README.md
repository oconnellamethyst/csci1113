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

## Lecture 3
```C++
int &r = x; // Makes a reference, ie, &r is a pointer that always points to the variable x
```
```C++
std::endl; // This labels endl, is like, this is the endl we're using
```
Line 22, what does this constructor do? Nothing. const4.cpp  
Most people aren't gifted at programming.  
The idea of ```const```, the parameter that goes into mult should be constant in const4.cpp. Why do we stay that? Because we don't want b to change when we multiply if ```c = a * b;``` so in our multiplication function, we want the complier to watch us.
You can have C++ treat the invoking object as a constant using
```C++
void COMPLEX::print2( ) const
```  
CONSTRUCTORS HAVE TO HAVE NO RETURN TYPE!
pg 112, Destructor, when an object is going away, sometimes you want to do things. Destructor does house cleaning. It's got a tilde out front, it does things
```C++
~COMPLEX( ) // This is a destructor
{
  cout << "Destroying a COMPLEX object" << endl;
}
```
On pg 118, there is a bit of code
```C++
COMPLEX(COMPLEX &c) // We call a reference instead of the thing so that this actually copies and doesn't do a weird recursion thing. 
{
  Re = c.Re;
  Im = c.Im;
  cout << "Constructing-COPY a COMPLEX object" << endl;
}
COMPLEX(
```
Static members and methods, you can create shared information. Language developers try to minimize the number of words in a language so it's eazier to memorize.
pg 95. Redundant copies of data are a nightmare, look at this code that creates student ids and also maintains student ids
```C++
Student::Student( ) // default constructor
{
  id = ++count;
}
```
Access specifiers.
```C++
class Student{ // If a specifier isn't used, it starts out private
  private: // This stuff below is private
    char * name;
  public: // This stuff below is public
    static long getCount();
}
```
pg 95, if we don't need a grade value, we don't hold onto the grade value. Reduce redundancy.
Term to be aware of, getters and setters.  
**getters** - Reads methods
**setters** - Write or change the values of methods.
We can control how it is altered using getters and setters, even private ones, but with the private ones, we can have super control over stuff.  
You might want a method that you only want a class to read, like a housekeeping method.
pg 122, Operator overloading, we can define operators to do extra things
```C++
COMPLEX COMPLEX::operator*(const COMPLEX & b) const
{
  COMPLEX result;
  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;
  
  return result;
}
```
pg 126,
```C++
public:
void print( ) const;
COMPLEX operator*(const COMPLEX & b) const;
COMPLEX operator-(const COMPLEX &b) const; // This is the binary operator, we've got the complex and then another complex
COMPLEX operator-( ) const; //This is the unary operator, there's a minus and a complex
```
When you overload a method, it's identified by function sig, name and parameter type
```C++
public:
  void print( ) const;
  COMPLEX operator*(const COMPLEX & b) const; // Multiply between two complex numbers
  COMPLEX operator*(const double &x) const; // Multiply between a complex number and a regular number
```
An integer times a double is a double.

## Lecture 4
Operator Overloading is making our data work with normal operators.  
--  
Inlining functions: When we make a function, we treat it like a separate region of our code, we have a main, and main might call that code. Inlining is different, inlining takes the function call and replaces it with the code of the function. Think of it like a small printing company vs a large printing company.   
--  
```C++
COMPLEX COMPLEX::operator*(const COMPLEX & b) const
{
  COMPLEX result;
  result.Re = Re*b.Re - Im*b.Im;
  result.Im = Re*b.Im + Im*b.Re;
  return result;
}
```
For operator overloading, you have to do code to define both orders, ie, separate code for 6.0 * COMPLEX and COMPLEX * 6.0
```C++
COMPLEX COMPLEX::operator*(const double &x) const // COMPLEX * 6.0
{
  COMPLEX result;
  
  result.Re = Re*x;
  result.Im = Im*x;
  
  return result;
}

COMPLEX operator*(const double &x, const COMPLEX &c)  // 6.0 * COMPLEX, this doesn't work yet because we don't have permission to access the double times complex, we have to give it permission
{
  COMPLEX result;
  
  result.Re = c.Re*x;
  result.Im = c.Im*x;
  
  return result;
}
```
How do we get permission then? Friends! pg 141
```C++
class COMPLEX{
  double Re;
  double Im;
public:
  void print( ) const;
  COMPLEX operator*(const COMPLEX & b) const;
  COMPLEX operator*(const double &x) const;
  friend COMPLEX operator*(const double &x, const COMPLEX &c); // We name it as a friend up here, and now our code from before works
```
We shouldn't actually do it that way though, we should do it like this
```C++
COMPLEX operator*(const double &x, const COMPLEX &c)
{
  return (c * x);
}
```
That way, all the hard work of multiplying is in that one function, so if you need to make changes.  
When we print, we usually do so using ```cout << i;``` but what if we want to use this operator to print our complex numbers?  
Thing's well have to deal with is that cout is not our class, so we'll have to make it a friend. Also, we've got two of those bois. And so...
```C++
class COMPLEX{
  double Re;
  double Im;
public:
  COMPLEX(double r, double im);
  COMPLEX(const COMPLEX &c)
  {
    Re = c.Re;
    Im = c.Im;
  }
  COMPLEX( )
  {
    Re = Im = 0;
  }
  ~COMPLEX( )
  {
  }

  COMPLEX operator*(const COMPLEX & b) const;
  COMPLEX operator*(const double &x) const;
  friend COMPLEX operator*(const double &x, const COMPLEX &c);

  COMPLEX operator-(const COMPLEX &b) const;
  COMPLEX operator-( ) const;

  friend ostream& operator<<(ostream&,const COMPLEX &); // THIS BOI! We use osteam so that it works with all of the o functions, not just cout, we make the complex constant because we don't want it to change while inside, we use the & so that we don't need to create a new variable just to throw it away
};
```
With our class complex, we're trying to pretend that our class was in C++ all along, and that's hard, but also cool.  
Terrence Par, worked at U of M, writes compiler building tools. "Why spend five days doing by hand what you can spend five years automating." A great example is Otto. Otto is written in pearl. Larry Wall, in charge of computers before good internet, like a soupcan with a string. Developed Perl to talk between systems, present it in a terse format. Perl does the heavy lifting from Otto, disassembles the emails and reassembles them. Larry Wall tutorial, email disassembly book, two lines in Perl.    
"I'll do that later" -Programmer for "I'll do it never"  
```C++
ostream & operator<<(ostream& os, const COMPLEX & c)
{
  os << "(" << c.Re << " + " << c.Im << "i)" ;
  return os; // Should return os
}
```
When we overload operators, we inherit their precidence.
Yo, when we make a function return statement void, we basically send it all to the void. Ya feel?
The parameter should be a reference and the return value should be a reference.  
  
**File I/O**, streams, cin cout a connection, sending bytes in, sending bytes out. fstream is used for file I/O, pg 162
```C++
/* FILE: File1.cpp */
// Write some output to a file.
#include <fstream>

using std::ofstream;
using std::endl;
int main( )

{
  ofstream outs; // Makes the stream, outs is whatever you want to call it
  
  outs.open("File1.out"); // Makes the file
  
  outs << "Hello world!" << endl; // Adds to the file
  
  outs.close( );  // Closes the file
}
```
pg 164
```C++
  os.unsetf(ios::showpos); // Makes our complex numbers look more natural.
```
Inheritance, you can take a class and work on top of it, compiler is paying attention, lets you treat them as similar. pg 166  
  
     
