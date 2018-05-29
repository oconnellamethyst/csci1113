//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 10.16 on page 247
//  A static function member

#include <iostream>
using namespace std;

class Widget
{ public:
    Widget() { ++count; }
    ~Widget() { --count; }
    static int num() { return count; }
  private:
    static int count;
};

int Widget::count = 0;

int main()
{ cout << "Now there are " << Widget::num() << " widgets.\n";
  Widget w, x;
  cout << "Now there are " << Widget::num() << " widgets.\n";
  { Widget w, x, y, z;
    cout << "Now there are " << Widget::num() << " widgets.\n";
  }
  cout << "Now there are " << Widget::num() << " widgets.\n";
  Widget y;
  cout << "Now there are " << Widget::num() << " widgets.\n";
}
