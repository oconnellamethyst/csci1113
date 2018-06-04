# csci1113 Lectures, Week 2
## Lecture 1
HK: There is a new version of C.pdf with 77 pages.  

Computers all fit a simple pattern  
Input -> Processing -> Output

For our program with the prism
**Input**  
Height  
Width  
Depth  
  
**Processing**  
Convert the inputs into the desired outputs  
  
**Output**  
Perimeters  
Areas  
Volumes  
Diagonals  
  
C.pdf pg 32  
Keyword "Void" can tell you that there are no parameters and no return values, but ya probabaly shouldn't use it in case something goes catastrophically wrong and you need to use your return values to find a plane or something.  
  
Just like in Python, C has functions
```C
#include <stdio.h>

void itsAFunction(void); // Function Prototype, Says, yo, be aware, this function exists

int main()
{
  printf("I am a shoe!");
  itsAfunction(); // Uses a function
  return 0;
}

void itsAFunction(void) // Says, yo, here's the function definition
{
  printf("I won't eat shoe then");
}
```
Don't waste the function name either, say what the function does in the name of the function.  
 
```C
float circleArea(float radius); \\ Can have things go in function
```
Just like in Python, variables in functions are different from variables outside of functions, (although, everything is in functions, but you get my drift).  
```C
float circleArea(float radius, float PI); \\ Can have many things go into a function
```
  
A good computer has reliability, speed, and capacity.
  
**Loops**
Logical statements, pg 41, C.pdf  
In C, 0 is false and anything other than 0 is true, it's an integer.  
There are relational operators that produce true or false
```C
== \\ equality
< \\ less than
> greater than
<= \\ less than or equal
>= \\ greater than or equal
!= \\ not equal
```
Be super careful with ==, as if you use a single =, it will work, but it will give a number, and will just make everything true.  
There are also logical operators
```C
&& \\ AND
|| \\ OR
! \\ NOT
```
These work like their digital logic equivalents, combining trues and falses (0's and 1's)  
While loop
```C
#include <stdio.h>
int main ()
{
  int i;
  
  i = 0;
  
  while (i < 10)
  {
    printf("i = %d\n", i + 1); // This plus 1 makes it normal, like Python, C starts at 0
	i++;
  }
  
  return 0;
}
```
For loop
```C
#include <stdio.h>
int main ()
{
  int i;
  
  for(i = 0; i < 10; i++)
  {
    printf("i = %d\n", i + 1); // This plus 1 makes it normal, like Python, C starts at 0
  }
  
  return 0;
}
```
Every once in a while, look away from the screen.  
Also, programs print better than they look on a screen.  
Get up, walk away with a printout and look at it again.
If you type ```a2psSrc first.c``` in CLI will turn it into a Postscript file, which you can then print. If you type ```gsview32 first.c.ps``` it will do the same.  
You can redirect the input and output functions in CLI ```first > output.txt```  
Write programs in small pieces.  
Test will consist of programming snippits (Whiteboard code)  