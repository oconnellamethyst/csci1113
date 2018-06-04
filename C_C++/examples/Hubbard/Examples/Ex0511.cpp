//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.11 on page 96
//  A Function that Prints Dates

#include <iostream>  // defines the cout object
using namespace std;

void printDate(int,int,int);
// // prints the given date in literal form;

int main()
{ // tests the printDate() function:
  int month, day, year;
  do
  { cin >> month >> day >> year;
    printDate(month,day,year);
  }
  while (month > 0);
}

void printDate(int m, int d, int y)
{ // prints the given date in literal form:
  if (m < 1 || m > 12 || d < 1 || d > 31 || y < 0)
  { cerr << "Error: parameter out of range.\n";
    return;
  }
  switch (m)
  { case  1:  cout << "January ";   break;
    case  2:  cout << "February ";  break;
    case  3:  cout << "March ";     break;
    case  4:  cout << "April ";     break;
    case  5:  cout << "May ";       break;
    case  6:  cout << "June ";      break;
    case  7:  cout << "July ";      break;
    case  8:  cout << "August ";    break;
    case  9:  cout << "September "; break;
    case 10:  cout << "October ";   break;
    case 11:  cout << "November ";  break;
    case 12:  cout << "December ";  break;
  }
  cout << d << ", " << y << endl;        
}
