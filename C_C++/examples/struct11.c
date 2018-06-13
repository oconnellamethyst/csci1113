/*     FILE: struct11.c     */

/* Reading data into a structure.
   
   Monitor input for success.  
   
   Capitalize on for loop features and comma operator*/

#include <stdio.h>

#define SIZE 5

struct part{
  char name[124];
  long no;
  double price;
};

void print_part(struct part* p);
int read_part(struct part*);

int main( )
{
  struct part inventory[SIZE];    /* Array to hold SIZE "part"s */

  int i;
  int count;
                                  /* Load the array of structures. */
  for(i=0, count=0; i < SIZE && read_part(inventory+i) != EOF; i++, count++)
    ; 

  for(i=0; i < count; i++){        /* Display the array of structures. */
    print_part(inventory + i);    /* Don't need to ask for the address  */
    printf("\n");                 /* ... since an array name is already */
  }                               /* ... an address.                    */

  return 0;
}

void print_part(struct part* p)   /* -> operator simplifies access thru */
{                                 /* ... a pointer.                     */
  printf("Product: %s\n", p->name);
  printf("Part No.: %ld\n", p->no);
  printf("Unit price: %.2f\n", p->price);

  return;
}

int read_part(struct part* temp)  /* returns the structure. */
{ 
  int result = 1;
  
  if(gets(temp->name) == NULL)
    result = EOF;
  if(result == 1 && scanf("%ld", &temp->no) != 1)
    result = EOF;
  if(result == 1 && scanf("%lf", &temp->price) != 1)
    result = EOF;
  if(result == 1)
    getchar( );                  /* Strip trailing newline */

  return result;
}


/*    OUTPUT: struct11.c

	Product: I/O card #0
	Part No.: 127356
	Unit price: 99.50
	
	Product: Network card #1
	Part No.: 127357
	Unit price: 102.50
	
	Product: USB card #2
	Part No.: 127358
	Unit price: 105.50
	
	Product: Fax card #3
	Part No.: 127359
	Unit price: 108.50
	
	Product: Modem card #4
	Part No.: 127360
	Unit price: 111.50
	

       INPUT: 

	I/O card #0
	127356
	99.50
	Network card #1
	127357
	102.50
	USB card #2
	127358
	105.50
	Fax card #3
	127359
	108.50
	Modem card #4
	127360
	111.50

	Product: Network card #1
	Part No.: 127357
	Unit price: 102.50
	
	Product: USB card #2
	Part No.: 127358
	Unit price: 105.50
	

       INPUT: 

	Network card #1
	127357
	102.50
	USB card #2
	127358
	105.50
*/
