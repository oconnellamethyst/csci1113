//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 6.17 on page 137
//  Using the assert() function to enforce a precondition

#include <cassert>   // defines the assert() function
#include <iostream>  // defines the cout object
using namespace std;

int main()
{ enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };
  float high[SAT+1] = {88.3, 95.0, 91.2, 89.9, 91.4, 92.5, 86.7};
  for (int day = SUN; day <= SAT; day++)
    cout << "The high temperature for day " << day
         << " was " << high[day] << endl;
}
