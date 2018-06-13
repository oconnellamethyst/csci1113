/*     FILE: struct5.c     */

/* Arrays can be used with structures just like any other
   C data type.                                           */

#include <stdio.h>

#define SIZE 5

struct part{
  char name[124];
  long no;
  double price;
};

void print_part(struct part p);

int main( )
{
  struct part board;              /* One "part" */
  struct part inventory[SIZE];    /* Array to hold SIZE "part"s */

  int i;

  for(i=0; i < SIZE; i++){        /* Load the array of structures. */
    sprintf(board.name,"I/O card #%d", i);
    board.no = 127356 + i;
    board.price = 99.50 + i*3;

    inventory[i] = board;
  }

  for(i=0; i < SIZE; i++){        /* Display the array of structures. */
    print_part(inventory[i]);
    printf("\n");
  }

  return 0;
}

void print_part(struct part p)
{
  printf("Product: %s\n", p.name);
  printf("Part No.: %ld\n", p.no);
  printf("Unit price: %.2f\n", p.price);

  return;
}


/*    OUTPUT: struct5.c

	Product: I/O card #0
	Part No.: 127356
	Unit price: 99.50
	
	Product: I/O card #1
	Part No.: 127357
	Unit price: 102.50
	
	Product: I/O card #2
	Part No.: 127358
	Unit price: 105.50
	
	Product: I/O card #3
	Part No.: 127359
	Unit price: 108.50
	
	Product: I/O card #4
	Part No.: 127360
	Unit price: 111.50
	

*/
