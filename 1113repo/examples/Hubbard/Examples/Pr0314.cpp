//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 3.14 on page 51
//  Using a switch statement for parallel alternatives

#include <iostream>
using namespace std;

int main()
{ // reports the user's grade for a given test score:
  int score;
  cout << "Enter your test score: ";
  cin >> score;
  if (score > 100 || score < 0)
    cout << "Error: that score is out of range.\n";
  else
    switch (score/10)
    { case 10:
      case  9: cout << "Your grade is an A.\n";  break;
      case  8: cout << "Your grade is a B.\n";   break;
      case  7: cout << "Your grade is a C.\n";   break;
      case  6: cout << "Your grade is a D.\n";   break;
      default: cout << "Your grade is an F.\n";  break;
    }
  cout << "Goodbye." << endl;
}
