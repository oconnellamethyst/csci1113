/*     FILE: FileIO_5.c     */

/* Binary I/O using fwrite( ) and fread( ) */
#include <stdio.h>

int main( )
{
  FILE *fptr;
  int i, x;

  x = 0;
  i = 7;

  printf("i = %d   x = %d\n", i, x);

  fptr = fopen("tmp.dat","w");

  if(fptr != NULL){
    fwrite(&i, 4, 1, fptr);
    fclose(fptr);
  }
  else
    printf("Unable to open file for write.\n");

  fptr = fopen("tmp.dat","r");

  if(fptr != NULL){
    fread(&x, sizeof(int), 1, fptr);
    fclose(fptr);
  }
  else
    printf("Unable to open file for read.\n");

  printf("i = %d   x = %d\n", i, x);

  return 0;
}


/*    OUTPUT: FileIO_5.c

	i = 7   x = 0
	i = 7   x = 7

*/
