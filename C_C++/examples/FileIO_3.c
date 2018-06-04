/*     FILE: FileIO_3.c     */

/* Text output using fprintf( ) */
#include <stdio.h>

int main( )
{
  FILE *fptr;
  int x= 7;
  double y = 7.25;

  fptr = fopen("FileIO_3.out","w");

  if(fptr != NULL){
    fprintf(fptr,"This data will be written to a file.\n");
    fprintf(fptr,"x = %d, y = %f\n", x, y);

    fclose(fptr);
  }
  else
    printf("Unable to open file.\n");

  return 0;
}


/*    OUTPUT: FileIO_3.c


*/


/*   OUTPUT: FileIO_3.out

	This data will be written to a file.
	x = 7, y = 7.250000

*/