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

## Lecture 2
```C
for(i = 100; i >= 5; i = i-5)
```
This is an example of how to do the exercise from yesterday  
To aid in completing these exercises, making a flowchart is advisable  
For example, if you accidentally do something like
```C
for(i = 0; i >= 0; i++)
```
Doing a flowchart will help you see your mistake before you have an infinitely running program  
The infinitely running program can only get to 2^31 - 1 before running out of space because our integer has 4 bytes  
```C
for( ; i >= 5; ) // This for loop
while(i >= 5) // is the same as this while loop
```
When reading the textbook, read the summary before reading the chapter, and then read it again after the chapter.  
For some C programs, you'll want to pipe the output to more using ```program | more``` in CLI, like for the sine sampling function in C.pdf 
Mathematical functions, pg 48, C.pdf
You can also send it to a file ```program > program.dat```
There are files that can be used to create graphics
OpenGL Examples
```make -f grapher.mak```
Makes the grapher utility
We can use this utility to graph our program.dat file
```Grapher program.dat```
Sometimes we don't prompt for data so that another program can do the data input for us.  
But yeah, if it's humans, have some prompts.  
C has ranking for all the datatypes, floats are more accurate than ints  
For floats, long doubles are more accurate than doubles are more accurate than floats
For integers, long longs are more accurate than longs are more accurate than ints are more accurate than shorts are more accurate than chars  
Doubles are pretty good for any sort of accuracy. If you need to be super accurate, you'd use a long double.  
Embedded processors, if you use a smaller processor, it's cheaper for the company. And if you're going to write a simple program, you should use the smallest storage location possible.  
You can use the power function, ```pow(current, 2.0);``` but like, don't if you're trying to optimize, it's more expensive than ```current * current```  
Computers are working all the time until the power is turned off.  
  
**Conditional statements**
If statement
```C
if (i > 0)
  printf("%d > 0\n", i);
else
  printf("%d is not > 0\n, i");
```
If statments can be nested.  
C also has a switch statements, pg 56 C.pdf
```C
/* Loop to quit on upper or lower case Q */
while(ch != 'q' && ch != 'Q'){
  switch(ch){
    case 'u':
    case 'U':
      printf("Case 'Up' selected.\n", ch);
      y++;
      break;
    case 'd':
    case 'D':
       printf("Case 'Down' selected.\n", ch);
       y--;
       break;
    case 'l':
    case 'L':
       printf("Case 'Left' selected.\n", ch);
       x--;
       break;
    case 'r':
    case 'R':
       printf("Case 'Right' selected.\n", ch);
       x++;
       break;
    default:
       printf("Invalid choice- '%c'.\n", ch);
       break;
}
```
There is a difference between single quotes and double quotes, ```'A'``` is a character, ```"A string"``` is a string.  
While loops want the opposite of a thing to quit, so we can use DeMorgans Law (from digital electronics) to change a thing to it's opposite
```C
// Quit:
// ch == 'Q' || ch == 'q'
// Change == to != and || to && to get the opposite
// Go:
while(ch != 'Q' && ch != 'q')
```
This thing can be compact if/else equivalent can be dropped into a statement, like a while loop
```C
result = i<0?-i:i; // <true/false>?<true code value>:<false code value>
```
## Lecture 3
All of the different data types are different on different computers, it will be the same for all the computers in this class, but different for different computers, so like, a Cray Supercomputer might have all things be 8 bits for fast movement of things.  
  
There are different input functions  
```C
scanf();
getchar();
```
There are different output functions
```C
printf();
putchar();
```
Then there's the processing
```C
var1 = 1 + 1;
var2 = 1 - 1;
var3 = 1 / 1;
var4 = 1 * 1;
var5 = log10(1);
var6 = sqrt(1);
```

Keep in mind that printing is very slow. A computer having to print every output will end much longer than a computer just having to print the last possible output.  
Also that integer math is much faster than floating point math.  
Also you can convert types, like ```(float)variable``` and ```(int)variable```
If you are multiplying say, ```2 * 3.5``` the 2 will be type promoted to a float to carry out the multiplication.  


C code first passes through the preprocessor, which replaces ```#define``` with their definitions, and uses the information from ```#include```. Things that are generally good to include are the Standard IO functions by doing ```#include <stdio.h>``` and the Math functions by ```#include <math.h>```

There are various relational and logical operators in C just like in Python. Also, loops exist. for and while, and conditional statements if/else and switch. Switch labels need to be integers, (or chars, which are integers). Break statement allows you to leave the switch, it's like a fire alarm. You can use break statements in While loops, but it's bad practice. There's also go-to in C, but that's bad practice for the same reason. Also, remember, for loops check the thing every time, so if you only need to check it once, check it once with an if statement.  

**Functions**
We have a program on pg 35 of C, and inside the program is the main and the functions. Inside the main, there are boxes for the variables, inside of the functions there are also boxes for variables. Within main there are function calls. The functions take information from main. When a program executes, we ask the program...

IPO diagrams, Input, Processing, Output. So for the pizza function:  
Output is Area (return value)  
We shouldn't have PI as a parameter, define it using ```#define```, we input the radius  
What should we produce with this function? We compute the area and return it in processing.  
These diagrams can help one plan programs.  
