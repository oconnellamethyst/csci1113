/*     FILE: Student3.cpp     */

/*
   Static members are "class" variables, that is, they are
   independent of any particular objects.
   
   Static methods can be accessed using an object of the
   class. This also identifies the class and member being 
   accessed. 

*/
#include <iostream>
using namespace std;

class Student{
    static long count;  // Keeps count of Student objects
                      // ... and generates id numbers.
    char * name;
    double gpa;
    long id;
  public:
    static long getCount( );

    const char * getName( ) const;
    char * setName(char const * const);
    double getGpa( ) const;
    double setGpa(double);
    long getId( ) const;
    char getGrade( ) const;
    void display( ) const;
    void print( ) const;

    Student( ); 
    Student(char * n, double g);
};

long Student::count = 0;
  
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
  
const char * Student::getName( ) const
{
  return name;
}
  
char * Student::setName(const char * const name)
{  // Exercising this 
  strcpy(this->name,name);
  return this->name;
}
  
double Student::getGpa( ) const
{
  return gpa;
}
  
double Student::setGpa(double gpa)
{
  return this->gpa = gpa;
}
  
long Student::getId( ) const
{
  return id;
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
    
    s.setName("Joe Coolest");
    s2.setName(s3.getName( ));
    s2.setGpa(2.25);
    s3.setName("Charlie Brown");
    s3.setGpa(3.25);
    
    cout << endl << endl;
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



/*    OUTPUT: Student3.cpp

	Number of students is: 0
	Joe Cool, 3.95, 1 is a A student.
	Cool Joe, 3.5, 2 is a A student.
	Joe Llama, 3.2, 3 is a B student.
	Number of students is: 3
	
	
	Joe Coolest, 3.95, 1 is a A student.
	Joe Llama, 2.25, 2 is a C student.
	Charlie Brown, 3.25, 3 is a B student.
	Number of students is: 3

*/
