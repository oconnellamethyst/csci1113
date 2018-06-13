/*     FILE: struct1.c     */

/* Defining and using a structure. */

#include <stdio.h>

int main( )
{
  struct part{
    char name[124];
    long no;
    double price;
  };

  struct part board;

  strcpy(board.name,"I/O card");
  board.no = 127356;
  board.price = 99.50;

  printf("Product: %s\n", board.name);
  printf("Part No.: %ld\n", board.no);
  printf("Unit price: %.2f\n", board.price);

  return 0;
}


/*    OUTPUT: struct1.c

	Product: I/O card
	Part No.: 127356
	Unit price: 99.50

*/
