//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 4.21 on page 71
//  Using a break statement in the middle of an infinite loop

#include <iostream>  // defines cout
using namespace std;

int main()
{ // computes the average of the input numbers:
  int n, count=0, sum=0;
  cout << "Enter positive integers (0 to quit):" << endl;
  for (;;)  // "forever"
  { cout << "\t" << count + 1 << ": ";
    cin >> n;
    if (n <= 0) break;
    ++count;
    sum += n;
  }
  cout << "The average of those " << count << " positive numbers is "
       << float(sum)/count << endl;
}
