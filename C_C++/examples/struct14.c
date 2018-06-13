/*     FILE: struct14.c     */

/* Typedef - simplified naming */

#include <stdio.h>

#define SIZE 5

struct part{
  char name[124];
  long no;
  double price;
};

typedef struct part part;     /* part becomes the type of "struct part" */

void print_part(const struct part * const);

int main( )
{
  part board;              /* One "part" */
  part inventory[SIZE];    /* Array to hold SIZE "part"s */
 
  FILE * fp;
  char * filename = "structBin.bin";
  int i;

  fp = fopen(filename,"w");
  
  if(fp != NULL){
    for(i=0; i < SIZE; i++){        /* Write the structures. */
      sprintf(board.name,"I/O card #%d", i);
      board.no = 127356 + i;
      board.price = 99.50 + i*3;

      fwrite(&board, sizeof(part), 1, fp);
    }
       
    fclose(fp);
  
    fp = fopen(filename,"r");
  
    if(fp != NULL){     /* Read the structures. */
      fread(inventory, sizeof(part), SIZE, fp);        

      fclose(fp);
   
      for(i=0; i < SIZE; i++){      /* Display the array of structures. */
        print_part(inventory + i);  
        printf("\n");               
      }                         
    }
    else
      fprintf(stderr,"Unable to open file %s for read.\n", filename);
  }
  else
    fprintf(stderr,"Unable to open file %s for write.\n", filename);
    
  return 0;
}

void print_part(const part * const p)  /* Display function */
{                            
  printf("Product: %s\n", p->name);
  printf("Part No.: %ld\n", p->no);
  printf("Unit price: %.2f\n", p->price);

  return;
}


/*    OUTPUT: struct14.c

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
