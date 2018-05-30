# csci1113 Lectures, Week 1
## Lecture 1

Compile with ```-Wall``` and it will give you all the warnings

## Lecture 2

There are different types of data types  
   
**Integers**  
char  
short  
int  
long  
long long  
  
**Floating-point**  
float  
double  
long double  
  
**Text**  
char  
  
Signed and unsigned, C uses the first part of a number in a signed number to indicate how it is positive or negative. If you always want positive numbers, you can do an unsigned integer.
  
There are comments in C
```C
/* This is a block comment in C
   They can span multiple lines
 */
 
// This is a single line comment, it is only on a single line.
```
  
Because C has heavy customization, C is used a lot in microprocessors.
  

```C
#include <stdio.h> // This is preprocessor instructions

int main() // There is always a main in a C program
{
	printf("Here is a program \n");  // It's my program
	
	return 0; // Here's the return statement, a lot like Python!
}
```
  
C runs the main first!  
  
C has ways to deal with numbers!

```C
int x = 54; // this is a decimal number
x = 066; // this is an octal number
x = 0x36 // this is a hexadecimal number
printf("x = %d in decimal",x);
printf("x = %o in octal",x);
printf("x = %0x in hexadecimal",x);
```

Conversion specifiers are found on Page 6 of the AppendixC pdf Document  
  
C identifiers (variable names) are case sensitive, must consist of letters, digits, and underscores, first character must be a letter, and although there is no length limit, it only looks at the first 31-63 characters. Keywords should not be used, keywords are found on page 10 of the AppendixC pdf Document.  
  
```C
sizeof(int) // Allows you to find out how big it is, because int is different sizes on different computers
```
  
There is an input function, ```scanf()``` to accompany the output function ```printf()```
```C
scanf("%f", &height); // You've got to specify the spot to put the stuff
```
  
Java is known for being slow, because it does a whole bunch of stuff. C doesn't so it's fast.
  
```C
#include <math.h>
sqrtf(float); // Takes the square root of the floating point number float
```