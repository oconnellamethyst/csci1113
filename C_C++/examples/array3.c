/*     FILE: array3.c     */

/* Reads values and displays them. */

#include <stdio.h>

main( )
{
  int ar[10];
  int i;

  for(i=0; i<10; i++)
  {
    printf("Enter value %d of %d: ", i+1, 10);
    scanf("%d", &ar[i]);
  }

  for(i=0; i<10; i++)
    printf("%d\n", ar[i]);

  return 0;
}



/*    OUTPUT: array3.c

	Enter value 1 of 10: 1
	Enter value 2 of 10: 2
	Enter value 3 of 10: 3
	Enter value 4 of 10: 4
	Enter value 5 of 10: 5
	Enter value 6 of 10: 6
	Enter value 7 of 10: 7
	Enter value 8 of 10: 8
	Enter value 9 of 10: 9
	Enter value 10 of 10: 10
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10

*/
