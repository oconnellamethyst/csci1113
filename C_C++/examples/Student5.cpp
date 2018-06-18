/*     FILE: Student5.cpp     */

/*
   Some errors associated with static members.

   Not creating/initializing a static data member.
*/
#include <iostream>
using namespace std;

class Student{
    char * name;
    double gpa;
    long id;
    static long count;  // Keeps count of Student objects
                      // ... and generates id numbers.
  public:
    static long getCount( );
    char getGrade( ) const;
    void display( ) const;
    void print( ) const;

    Student( ); 
    Student(char * n, double g);
};

//long Student::count = 0;
  
Student::Student( )  // default constructor
{
  id = ++count;
}

Student::Student(char * n, double g)
{
  name = new char[strlen(n)+1];
  strcpy(name,n);
  gpa = g;
  id = ++count;
}
  
long Student::getCount( )
{
  return count;
}
  
char Student::getGrade( ) const
{
  char grade;
    
  if (gpa >= 3.5)
    grade = 'A';
  else if (gpa >= 2.5)
    grade = 'B';
  else if (gpa >= 1.5)
    grade = 'C';
  else if (gpa >= 0.5)
      grade = 'D';
  else
    grade = 'F';
      
  return grade;
}

void Student::display( ) const
{
  cout << "Student name = "  << name << endl;
  cout << "Student gpa = " << gpa << endl;
  cout << "Student id = " << id << endl;
}

void Student::print( ) const
{
  cout << name << ", " << gpa << ", " << id;
}

int main( ) 
{
    cout << "Number of students is: " << Student::getCount( ) << endl;
                                         // No choice but to use class name,
                                         // ... no objects exist.
    Student s("Joe Cool", 3.95), 
            s2("Cool Joe", 3.5), 
            s3("Joe Llama", 3.2);
    
    s.print( );
    cout << " is a " << s.getGrade( ) << " student." << endl;
    s2.print( );
    cout << " is a " << s2.getGrade( ) << " student." << endl;
    s3.print( );
    cout << " is a " << s3.getGrade( ) << " student." << endl;
    cout << "Number of students is: " << s2.getCount( ) << endl;
                                         // s2 is used to call static method
    return 0;
}



/*    OUTPUT: Student5.cpp

	c:\windows\TEMP\ccdDeegb.o(.text+0x8):Student5.cpp: undefined reference to `Student::count'
	c:\windows\TEMP\ccdDeegb.o(.text+0xd):Student5.cpp: undefined reference to `Student::count'
	c:\windows\TEMP\ccdDeegb.o(.text+0x69):Student5.cpp: undefined reference to `Student::count'
	c:\windows\TEMP\ccdDeegb.o(.text+0x6e):Student5.cpp: undefined reference to `Student::count'
	c:\windows\TEMP\ccdDeegb.o(.text+0x85):Student5.cpp: undefined reference to `Student::count'

*/
