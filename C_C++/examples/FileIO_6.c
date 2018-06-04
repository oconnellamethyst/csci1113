/*     FILE: FileIO_6.c     */

/* Binary I/O using fwrite( ) and fread( ) */
#include <stdio.h>

int main( )
{
  FILE *fptr;
  int i, ar[5], ar2[5];

  for(i=0; i<5; i++)
    ar[i] = i*11;

  fptr = fopen("tmp.dat","w");

  if(fptr != NULL){
    fwrite(&ar[0], sizeof(int), 5, fptr);
    fclose(fptr);
  }
  else
    printf("Unable to open file for write.\n");

  fptr = fopen("tmp.dat","r");

  if(fptr != NULL){
    fread(ar2, sizeof(int), 5, fptr);
    fclose(fptr);
  }
  else
    printf("Unable to open file for read.\n");

  for(i=0; i<5; i++)
    printf("ar2[%d] = %d\n", i, ar2[i]);

  return 0;
}


/*    OUTPUT: FileIO_6.c

	ar2[0] = 0
	ar2[1] = 11
	ar2[2] = 22
	ar2[3] = 33
	ar2[4] = 44

*/
