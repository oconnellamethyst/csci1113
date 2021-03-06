/*     FILE: Matrix3_2.cpp     */

/*
   A generic 2-D array of integers.
   
   Addition operator.
     - Size checking
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
   MATRIX operator+(const MATRIX & operand2);
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

MATRIX MATRIX::operator+(const MATRIX & operand2)
{
   if(cols != operand2.cols || rows != operand2.rows)
       abort( );
       
   MATRIX result(rows, cols);
     
   for(int i=0; i<getRows( ); i++)
     for(int j=0; j<getCols( ); j++)
       result.setValue(i,j) = getValue(i,j) 
                              + operand2.getValue(i,j);
   
   return result;
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
  MATRIX m1(3,4);
  MATRIX m2(3,4);
  MATRIX m3(5,5);

  for(i=0; i<m1.getRows( ); i++)
    for(j=0; j<m1.getCols( ); j++)
      m1.setValue(i,j) = i*10 + j;

  for(i=0; i<m3.getRows( ); i++)
    for(j=0; j<m3.getCols( ); j++)
      m3.setValue(i,j) = i*10 + j;

  for(i=0; i<m2.getRows( ); i++)
    for(j=0; j<m2.getCols( ); j++)
      m2.setValue(i,j) = i*10 + j;
      
  for(i=0; i<m3.getRows( ); i++)
    for(j=0; j<m3.getCols( ); j++)
      m3.setValue(i,j) = i*10 + j;

      

  m1.print( );

  cout << endl;  
  cout << endl;  
  
  m2.print( );
  
  cout << endl;  
  cout << endl;  
  
  m3.print( );
  
  MATRIX sum(3,4);
  
  sum = m1 + m2;

  cout << endl;  
  cout << endl;  
  
  cout << "Sum: " << endl;
  
  sum.print( );
  
  if(m1.getRows( ) == m3.getRows( ) && m1.getCols( ) == m3.getCols( ))
  {
    sum = m1 + m3;

    cout << endl;  
    cout << endl;  
  
    cout << "Sum: " << endl;
  
    sum.print( );
  }
  else{
    cout << "\nERROR: Matrix dimension mismatch!" << endl;
  }
  
  sum = m1 + m3;

  cout << endl;  
  cout << endl;  
  
  cout << "Sum: " << endl;
  
  sum.print( );
  
  return 0;
}


/*    OUTPUT: Matrix3_2.cpp

	  0  1  2  3
	  10  11  12  13
	  20  21  22  23
	
	
	  0  1  2  3
	  10  11  12  13
	  20  21  22  23
	
	
	  0  1  2  3  4
	  10  11  12  13  14
	  20  21  22  23  24
	  30  31  32  33  34
	  40  41  42  43  44
	
	
	Sum: 
	  0  2  4  6
	  20  22  24  26
	  40  42  44  46
	
	ERROR: Matrix dimension mismatch!
	
	This application has requested the Runtime to terminate it in an unusual way.
	Please contact the application's support team for more information.

*/
