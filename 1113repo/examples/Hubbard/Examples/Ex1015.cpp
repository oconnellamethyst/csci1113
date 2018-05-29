//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.15 on page 246
//  A private static data member

#include <iostream>
using namespace std;

class Widget
{ public:
    Widget() { ++count; }
    ~Widget() { --count; }
    int numWidgets() { return count; }
  private:
	    static int count;
};

int Widget::count = 0;

int main()
{ Widget w, x;
  cout << "Now there are " << w.numWidgets() << " widgets.\n";
  { Widget w, x, y, z;
    cout << "Now there are " << w.numWidgets() << " widgets.\n";
  }
  cout << "Now there are " << w.numWidgets() << " widgets.\n";
  Widget y;
  cout << "Now there are " << w.numWidgets() << " widgets.\n";
}
