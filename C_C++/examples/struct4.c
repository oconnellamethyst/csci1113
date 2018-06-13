/*     FILE: struct4.c     */

/* Structures are like basic data types. You can pass them
   to a function and the entire structure is passed.       */

#include <stdio.h>

struct part{
  char name[124];
  long no;
  double price;
};

void print_part(struct part p);

int main( )
{
  struct part board;
  struct part board2;

  strcpy(board.name,"I/O card");
  board.no = 127356;
  board.price = 99.50;

  board2 = board;          /* assign one structure to another. */

  print_part(board);       /* Print part structures with a function. */

  printf("\n\n");

  print_part(board2);

  return 0;
}

void print_part(struct part p)
{
  printf("Product: %s\n", p.name);
  printf("Part No.: %ld\n", p.no);
  printf("Unit price: %.2f\n", p.price);

  return;
}


/*    OUTPUT: struct4.c

	Product: I/O card
	Part No.: 127356
	Unit price: 99.50
	
	
	Product: I/O card
	Part No.: 127356
	Unit price: 99.50

*/
