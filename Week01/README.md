# csci1113 Lectures, Week 1
## Lecture 1

Compile with ```-Wall``` and it will give you all the warnings

## Lecture 2

There are different types of data types  
   
**Integers**  
char  
short  
*int*  
long  
long long  
  
**Floating-point**  
*float*  
double  
long double  
  
**Text**  
*char*  
  
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

C will not convert things for you, C is not kind, C will not clear out your storage before you start using it for variables. Also you can use specific memory addresses with ```scanf()```
  
```C
scanf("%f",specificMemoryAddress);
```

There is a way to type cast things
```C
m = (float)y1 + (float)y2;
```

##Lecture 3
Preprocessor reads, and other stuff ```#include <stdio.h>```
```bash
gcc -E first.c
```
This command only does the preprocessor stuff, it shows a bunch of stuff.  
If you fail to define ```#include <math.h>``` when using ```M_PI``` you'll get an error.  

This is the simplified process  
.c -> compiler -> .exe  

This is more what's going on  
.h + .c -> preprocessor -> .o + LIB -> linker -> .exe  

**Operators**
pg 19 of C.pdf
```C
int main()
{
	int first, second, sum;
	first = 11;
	second = 12;
	
	sum = first + second; // Remember, what you name your variables has nothing do to with your code
	printf("%d + %d = %d\n", first, second, sum);
	
	sum = first - second;
	printf("%d - %d = %d\n", first, second, sum);
	
	sum = first * second;
	printf("%d * %d = %d\n", first, second, sum);
	
	sum = first / second;
	printf("%d / %d = %d\n", first, second, sum);
}
```

Operator Precedence is like PEMDAS in C, but it's more detailed. Multiplication and division outrank addition and subtraction. If there's a tie, goes left to right to break the tie. For unary operators, and some other stuff, tie breakers are right to left.  

Information about operators is on C.pdf pg17  
  
Fun fact, ```printf()``` converts all floats to doubles, which is why you can use ```%f``` for doubles in ```printf()``` but not in ```scanf()```
  
C doesn't do native fractions, if you want fractiony fractions, you'd need to do it something like
```C
int numerator, denominator;
printf("%d / %d", numerator, denominator);
```
  
There's something wrong with this code!
```C
int sum;
sum = (float)first / (float)second;
```
It's that sum should be a float, else it will just truncate extra data.  
Also, this is bad naming, it shouldn't be named sum if it's not a sum, don't confuse your poor junior devs.  
  
Data types! They're important yo!
  
Also!
```C
int main()
{
	int i = 7;
	printf(%d,i++);
	printf(%d,i);
}
```