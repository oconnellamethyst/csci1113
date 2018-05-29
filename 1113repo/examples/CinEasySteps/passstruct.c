#include <stdio.h>

typedef struct
{
  	char *name ;
	int quantity ;
} Item ;

Item fruits[3] = { {"Apple", 10}, {"Orange", 20}, { "Pear", 30 } } ;

void display( Item val, Item *ref ) ;


int main()
{
	display( fruits[0], &fruits[0] ) ;

	return 0 ;
}

void display( Item val, Item *ref )
{
  /* Show passed values. */
  printf( "%s: %d\n" , val.name , val.quantity ) ;

  /* Change passed values. */
  val.name= "Banana" ;
  val.quantity = 40 ;

  /* Show changed values. */
  printf( "%s: %d\n" , val.name , val.quantity ) ;

  /* Show original is unchanged. */
  printf( "%s: %d\n" , fruits[0].name , fruits[0].quantity ) ;

  /* Change original values, */
  ref->name = "Peach" ;
  ref->quantity = 50 ;

  /* Show original is changed. */
  printf( "%s: %d\n" , fruits[0].name , fruits[0].quantity ) ;
  
}
