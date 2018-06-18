/*     FILE: structures.c     */

/*
   Creates a structure to contain the information of a book for a class and prints the contents of the structure
*/
#include <stdio.h>
#include <string.h>

struct book{ // Creates a struct that contains the information about a book
    char title[40];
    char authorLast[15];
    long isbn;
    short year;
  }; // For some reason the compiler really wants me to put a semicolon here, IDK why, but it makes the code work
  
  int display(struct book* class);

int main( )
{
  
  struct book csci1410;
  
  strcpy(csci1410.title, "C PROGRAMMING ABSOLUTE BEGINNER'S GUIDE"); // Entering information about the book
  strcpy(csci1410.authorLast, "PERRY");
  csci1410.isbn = 9780789751980;
  csci1410.year = 2014;
  
  display(&csci1410);
    
  
  return 0;
}

int display(struct book* class){ // Function that prints the information about the book
  printf("Book title: %s\n",class->title);
  printf("Author's last name: %s\n",class->authorLast);
  printf("ISBN number: %ld\n",class->isbn);
  printf("Year published: %d\n",class->year);
  return class->isbn;
}

/*    OUTPUT: structures.c

  Book title: C PROGRAMMING ABSOLUTE BEGINNER'S GUIDE
  Author's last name: PERRY
  ISBN number: 9780789751980
  Year published: 2014
  
*/
