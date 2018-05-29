//  Programming with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 14.1 on page 

#include <iostream>
using namespace std;

void f(string);

int main()
{ string x = "****";
  try
  { cout << "Now trying to call f(x):" << endl;
    cout << "Passing argument x = " << x << endl;
    f(x);
  }
  catch(string e)
  { cout << "Exception object e was caught:" << endl;
    cout << "The object e = " << e << endl;
  }
}

void f(string xx)
{ cout << "    f(xx) is now executing." << endl;
  cout << "    Its parameter xx = " << xx << endl;
  string ee = "!!"+xx+"!!";
  cout << "    Created object ee = " << ee << endl;
  cout << "    Now throwing ee as an exception." << endl;
  throw ee;
  cout << "    THIS LINE SHOULD NOT EXECUTE!" << endl;
}
