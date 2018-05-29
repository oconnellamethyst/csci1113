//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.14 on page 246
//  A static data member

#include <iostream>
using namespace std;

class Widget
{ public:
    Widget() { ++count; }
    ~Widget() { --count; }
    static int count;
};

int Widget::count = 0;

int main()
{ Widget w, x;
  cout << "Now there are " << w.count << " widgets.\n";
  	{ Widget w, x, y, z;
    cout << "Now there are " << w.count << " widgets.\n";
  }
  cout << "Now there are " << w.count << " widgets.\n";
  Widget y;
  cout << "Now there are " << w.count << " widgets.\n";
}
