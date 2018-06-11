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