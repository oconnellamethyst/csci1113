# csci1113 Lectures, Week 3
## Lecture 1
Pointers, page 69 C.pdf
```C
int* = ptr;
ptr = &i; // Pointer now holds the location of i as an integer storage location
```
So why do we need the star? Why are they treated differently? I mean, it's useful, if you're treating a storage location as a normal integer, you're probably doing something wrong, but also they are slightly different sizes due to the signed bit.  
C is a "pass by value" language, which means there is a barrier between the calling code and the function that's been called.  
What if I want to exchange the values? (C.pdf pg 70)  
The functions have their own copies of the variables, so you would need some fenaglining to make it work, just like Python.    
Think about how there are multiple people you know that are named Jim, how do you keep it staight? Context.  
And so, to get this function to work, we can use Pointers
```C
...
swap(&x, &y);
...
void swap(int* x, int* y)
{
  int temp;
  
  temp = *x;
  *x = *y;
  *y = temp;
}
```
Basically like global variables.  
Hey, we've actually used pointers before!  
```C
FILE *fptr
```
For the file I/O functions!  
  
There's not a lot of time that we use individual characters, we care about a string of characters, a set of characters.  
C has strings, a set of characters terminated by a null character, a flag value, "this is where the string ends." This is indicated by double quotes (").  
Say we're storing the string "Jim Polzin" there are 10 characters in the string, plus the null character, so we would create a character array...
```C
char name[11];
name[0] = 'J';
name[1] = 'i';
name[2] = 'm';
name[3] = ' ';
name[4] = 'P';
name[5] = 'o';
name[6] = 'l';
name[7] = 'z';
name[8] = 'i';
name[9] = 'n';
name[10] = '\0' // techinically, name[10] = 0; would also work, but it wouldn't be clear that this zero is a null, ya feel?
```
Like so. People don't do this, but ya could if you were feeling particularly masochistic.  
(Reminder, ' is characters, " is strings. If you mess them up in this case, everything is lost. This is different from Python.)  
Reminder that characters are numbers so...
```C
for(int i = 0; i < 11; i++)
  printf("%c == %d \n", name[i],name[i]);
```
(Need ```-stdc99``` to compile, probably in bad form...)
When you do this, you get all the characters and the numbers that represent them. You could also store characters in this way that you wouldn't actually want as a string. Also, you can to the inverse, ie ```name[0] = 74;```  
No normal human would want to do this though, so for practical use...
```C
char name[11] = "Jim Polzin";
```
You don't even need to count them!
```C
char name[] = "Jim Polzin";
```
We can use ```sizeof()``` to check how long it is including null. Also, ```%s``` is used for strings in ```printf()``` and others. The ```strlen()``` function can give the length actually in use for a string, and can also indicate errors.  
  
Arrays can store biggly amounts of numbers, a set of data, you can do this with anything.
```C
int ar[1000]; \\ This creates an array of 1000 integers *Dr. Evil finger gesture*
```
You can use #define for this
```C
#define SIZE 1000
...
int ar[SIZE];
```
Always remember that the compiler is the expert on C, Tu eres nadie.  
There's a function called ```strcpy(var, "A string")``` ```strcpy()``` is like assignment, like ```y = 7;``` lines after y is initialized after ```int y;```
In a production environment, you can't analyze bugs, you have to just fix them. Unlike in academia.  
In order to use ```strcpy()``` and other string-related functions, you need to initialize it ```#include <string.h>```
Use whatever tool will make your life easier. Good code is good.  
## Lecture 2  
*97 things programmers should know*
Keep the build clean: don't tolerate warnings from the compiler.  
Know how to use command line tools, you'll learn more about what the tools are doing. Try writing your own make file. Use open-source tools like gcc.  
If you're stuck on a coding problem, take a break! Your brain works differently when it's hooked up to a computer. Use pencils.  
  
**Arrays** pg 85 C.pdf
Arrays are a set of storage locations. They are indexed starting at *zero*
Less than operators can help with the mental gymnastics of starting at zero.
Create your UX for normies! Not for programmers! Like the code on pg 89 of C.pdf asks for index values, but ads 1 to the index value so that humans who don't start at zero can operate the program.  
Make sure to typecast things into floats unless you really like integer math!  
You can typecast something into double using ```(double)```
Arrays have a fixed size, which can be annoying. There is something called "dynamic memory allocation" we'll learn about later, but for now, we should leave a bit more space than we need in our arrays. pg 91 C.pdf has an example program.  
Sorting is discussed a lot in CSCI. pg 92 of C.pdf has an example sorting program.  
<stdlib.h> is the standard library, it has many functions that are important, but don't quite fit. One of these functions is the rand(); which gives a random integer. You can use the modulus to restrict the size of the integers, though, C starts at zero, so if you don't want zeros, you'll have to add one.  
Donald Knuth, random numbers, computers use algorithms to be random, hard to find a good algorithm. ```rand``` is an algortithm always starts in the same spot. ```srand``` can be used for better randomness by giving the random number generator a seed number like ```srand(21);```
There's a library ```<time.h>``` has a bunch of time routines, and it can be used to seed ```srand``` for something more random. They don't use this in casinos though, nothing is random in a casino. Read *The Power of Habit*. Using random methods is the Monte Carlo method, the gambler's ruin.  
Orbital Sciences: what are the odds that everything goes wrong? Test random numbers.  
Only seed the random number generator once, because computers are fast   
Piping between C programs can cause cool results, like piping ```|``` between a random number generator program and a program that uses those numbers. Also, saving them and using them.  
```strcat(var, " Second part of sting");``` The string concatenation function adds a part of a string to an existing string, it's a part of ```<string.h>```
Write good code! Comment on your code!  
Arrays and Pointers are closely related. Arrays are large quantities of information. C accesses arrays by address of where they start, b/c speed. pg 98, C.pdf, Arrays are kind of like Python lists, but they are stored like pointers. The address of the starting entry in array list[SIZE] is list. list is a pointer. Arrays can be written like pointers.
Zero is false so you can do weird stuff like ```white(*dest++ = *src++);``` to copy string, and the while loop stops when the string hits null, ie, perfectly copies the string.
## Lecture 3
You can create multidimentional arrays. C.pdf pg 103-115  
```int x[2][3][4];```  
Multidimensional arrays are sets of sets of storage locations. Thank god for the compiler.  
Makes it easier to deal in the art of tables.  
Also, means that multiple variables can be out of a function.  
```C
void nameFun(int array[ ])
```
You need to keep track of the length of your arrays, C won't do it for you. You should define the multiple dimensions of a multidimensional array though
```C
void nameFun(int array[ ][3])
```
Arrays are useful for really narrowing it down, like say, if you were trying to aim a bomb :)  
pg 125, can create a ragged array
pg 126, gets command line arguments after program is run.
```a one two three > junk.junk```
Tosses in the stuff that's not for the CLI.
in CLI double quotes tells CLI it's a single unit, ie, helps with spaces in things.  
  
Storage Classes in C, pg 128
Local information: variables inside a function, these are Automatic variables, they are not initialized by default.
Global information: variables outside a function, known to all functions, these are External variables. They are initialized to zero by default. ```extern int w```
There are also statics, static automatic, and static internal, they exist for the entire duration of the program. Static internal is restricted to the program.
Dynamic memory, allocated using ```malloc()``` and exists until it's released by ```free()```, accessed by address.
There are also function scopes.

## Lecture 4
You don't need to use an array for the Assignment  
Structures, unions, bit operations and dynamic memory allocation

Bit operation can be useful for electrical engineers, but not for many others.  

Up until now we've been working with one data at a time, but usually we want different structures, Structures allows use to take several pieces of data, package them up, and use them as a set, (pg 131 C.pdf)

```C
struct name{
  char string[124];
  long number;
  double bigMoney;
};

struct name thisIsOne;

strcpy(name.string, "This is a string"); // name.string is how you access the individual piece of the thing.
```
(pg 132, C.pdf)

Arrays are sent by address, We can also do this with structures, but we have to use pointers.
```sprintf()``` is a function that lests you generate printf functions within your program   
Send pointers, not functions, pg 138
```C
void print_part(struct part* p)
{
  printf("Product: %s\n", (*p).name);
  printf("Part No.: %ld\n", (*p).no);
  printf("Unit price: %.2f\n", (*p).price);
  return;
}
```
There's an alternate operator that uses a better format
```C
void print_part(struct part* p) /* -> operator simplifies access thru */
{ /* ... a pointer. */
  printf("Product: %s\n", p->name);
  printf("Part No.: %ld\n", p->no);
  printf("Unit price: %.2f\n", p->price);
  return;
}
```
pg 150 C.pdf
  
We can create enumerated types, means less errors!
```C
enum GPA{F, D, C, B, A};
```
Unions allow multiple mappings of the same piece of storage, think Pokemon Blue.
Unions can also be used for byte-wise inspection of storage (pg 160).
For example, the computer is using Little Endian archetecture for the example on the pg 160.
There are big endian machines too.  
  
```typedef()``` allows you to type less, i.e.
```C
typedef struct steve steve;
```
Lets you just type steve instead of ```struct steve```
  
C has several bit opperators
```C
int x = 7; //0...0111
int y;
y = x << 2; //0...011100 moves information 2 to the right
y = x >> 2; //0...001 moves informaiton 2 to the left, it gets chopped
```

You can use it to turn on and off individual bits like an Electrical Engineer
```C
int x;
x = 1 << 0;
x = 1 << 3;
```
  
There are also other operators
```C
x = ~1 << 3; // NOT = ~
```
Remember that this moves bits rather than deletes them, so the code above does something like 1111...0111  
  
Bitwise operators  
```C
// OR = |
// AND = &
// XOR = ^
// NOT = ~
```
  
Let's say we have a storage location y with the bits 0...100111 and we want to change it so that it is 0...101111, we use
```y = y | 1 << 3;``` because ```1 << 3``` is ```0...001000```  
What if we want it off?
```y = y &~ 1 << 3``` The AND and NOT create ```1...110111```
What if we want to toggle it, ie, make it the opposite of what it is?
```y = y ^ 1 << 3```  
  
Dynamic Memory Allocation
Call ```malloc``` you have to close it using ```free```
We just get a pointer to track malloced storage. pg 174
  
We'll be using C++, Straustrom wanted to model certain things, to get fast performance.