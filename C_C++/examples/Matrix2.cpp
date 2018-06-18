/*     FILE: Matrix2.cpp     */

/*
   A generic 2-D array of integers.
   
   Print function
     - Value access
*/
#include <iostream>
#include <iomanip>

using namespace std;

class MATRIX{
   int * ptr;
   int rows;
   int cols;
public:
   MATRIX( );
   MATRIX(int r, int c);
   MATRIX(const MATRIX & param);
   ~MATRIX( ){ delete [ ] ptr;}
   MATRIX &operator=(const MATRIX & operand2);
   int& print( ) const;
  
   int getRows( ) const;
   int getCols( ) const;
   int getValue(int r, int c) const;
   int& setValue(int r, int c)const;
};

MATRIX::MATRIX( )
{
   rows = 0;
   cols = 0;
   ptr = NULL;
}

MATRIX::MATRIX(int r, int c)
{
   rows = r;
   cols = c;
   ptr = new int[rows*cols];
}

MATRIX::MATRIX(const MATRIX & param)
{
   rows = param.rows;
   cols = param.cols;
   ptr = new int[rows*cols];
   for(int i=0; i<rows*cols; i++)
     ptr[i] = param.ptr[i];
}

MATRIX & MATRIX::operator=(const MATRIX & operand2)
{
   if(this != &operand2){
     rows = operand2.rows;
     cols = operand2.cols;
     delete [ ] ptr;
     ptr = new int[rows*cols];
     for(int i=0; i<rows*cols; i++)
       ptr[i] = operand2.ptr[i];
   }
   return *this;
}

int MATRIX::getRows( ) const
{
   return rows;
}

int MATRIX::getCols( ) const
{
   return cols;
}

int MATRIX::getValue(int r, int c) const
{
   return ptr[r*cols + c];
}

int& MATRIX::setValue(int r, int c) const
{
   return ptr[r*cols + c];
}

int& MATRIX::print( ) const
{
  int i,j;
  
  for(i=0; i<getRows( ); i++)
  {
    for(j=0; j<getCols( ); j++)
      cout << "  " << getValue(i,j);
      
    cout <<endl;
  }

}

int main( )
{
  int i, j;
  MATRIX m1(5,5);
  MATRIX m2(3,4);

  for(i=0; i<m1.getRows( ); i++)
    for(j=0; j<m1.getCols( ); j++)
      m1.setValue(i,j) = i*10 + j;

  for(i=0; i<m2.getRows( ); i++)
    for(j=0; j<m2.getCols( ); j++)
      m2.setValue(i,j) = i*10 + j;
      
      

  m1.print( );

  cout << endl;  
  cout << endl;  
  
  m2.print( );

  return 0;
}


/*    OUTPUT: Matrix2.cpp

	  0  1  2  3  4
	  10  11  12  13  14
	  20  21  22  23  24
	  30  31  32  33  34
	  40  41  42  43  44
	
	
	  0  1  2  3
	  10  11  12  13
	  20  21  22  23

*/
