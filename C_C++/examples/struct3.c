/*     FILE: struct3.c     */

/* Structures are like basic data types. */

#include <stdio.h>

struct part{
  char name[124];
  long no;
  double price;
};

int main( )
{
  struct part board;
  struct part board2;

  strcpy(board.name,"I/O card");
  board.no = 127356;
  board.price = 99.50;

  board2 = board;          /* assign one structure to another. */

  printf("Product: %s\n", board.name);
  printf("Part No.: %ld\n", board.no);
  printf("Unit price: %.2f\n", board.price);

  printf("\n\n");
  printf("Board2 - Product: %s\n", board2.name);
  printf("Board2 - Part No.: %ld\n", board2.no);
  printf("Board2 - Unit price: %.2f\n", board2.price);

  return 0;
}


/*    OUTPUT: struct3.c

	Product: I/O card
	Part No.: 127356
	Unit price: 99.50
	
	
	Board2 - Product: I/O card
	Board2 - Part No.: 127356
	Board2 - Unit price: 99.50

*/
