/*     FILE: struct2.c     */

/* Defining and using a structure. */

#include <stdio.h>

struct part{
  char name[124];
  long no;
  double price;
};

int main( )
{
  struct part board;

  strcpy(board.name,"I/O card");
  board.no = 127356;
  board.price = 99.50;

  printf("Product: %s\n", board.name);
  printf("Part No.: %ld\n", board.no);
  printf("Unit price: %.2f\n", board.price);

  printf("\n\n");
  printf("struct part size: %d\n", sizeof(struct part));
  printf("board size: %d\n", sizeof(board));
  printf("      board at: %p\n", &board);
  printf(" board.name at: %p\n", &board.name);
  printf("   board.no at: %p\n", &board.no);
  printf("                %p = %X + %X \n", 
           &board.no, &board.name, sizeof(board.name));
  printf("board.price at: %p\n", &board.price);
  printf("                %p = %X + %X \n", 
           &board.price, &board.no, sizeof(board.no));

  return 0;
}


/*    OUTPUT: struct2.c

	Product: I/O card
	Part No.: 127356
	Unit price: 99.50
	
	
	struct part size: 136
	board size: 136
	      board at: 0022FED8
	 board.name at: 0022FED8
	   board.no at: 0022FF54
	                0022FF54 = 22FED8 + 7C 
	board.price at: 0022FF58
	                0022FF58 = 22FF54 + 4 

*/
