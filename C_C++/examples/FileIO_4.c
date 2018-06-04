/*     FILE: FileIO_4.c     */

/* Text I/O using fprintf( ) and fscanf( ) */
#include <stdio.h>

int main( )
{
  FILE *fptr;
  int i, x;

  fptr = fopen("FileIO_4.out","w");

  if(fptr != NULL){
    for(i=0; i<5; i++)
      fprintf(fptr,"%d\n", i);

    fclose(fptr);
  }
  else
    printf("Unable to open file.\n");

  fptr = fopen("FileIO_4.out","r");

  if(fptr != NULL){
    for(i=0; i<5; i++){
      fscanf(fptr,"%d", &x);
      printf("Read: %d\n", x);
    }

    fclose(fptr);
  }
  else
    printf("Unable to open file.\n");

  return 0;
}


/*    OUTPUT: FileIO_4.c

	Read: 0
	Read: 1
	Read: 2
	Read: 3
	Read: 4

*/


/*   OUTPUT: FileIO_4.out

	0
	1
	2
	3
	4

*/