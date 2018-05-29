//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 5.17 on page 113
//  A Function that Extracts Digits

#include <iostream>  // defines the cin and cout objects
using namespace std;
int digit(long,int);

int main()
{ int n, k;
  cout << "Integer: ";
  cin >> n;
  do
  { cout << "Digit: ";
    cin >> k;
    cout << "Digit number " << k << " of " << n
         << " is " << digit(n, k) << endl;
  } while (k > 0);
}

int digit(long n, int k)
{ for (int i = 0; i < k; i++)
    n /= 10;  // remove right-most digit
  return n % 10;
}
