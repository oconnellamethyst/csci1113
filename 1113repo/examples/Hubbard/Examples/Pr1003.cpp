//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 10.3 on page 249
//  A Time class

#include <cmath>
#include <iostream>
using namespace std;

class Time
{ public:
	  Time(int h=0, int m=0, int s=0)
	      : hr(h), min(m), sec(s) { normalize(); }
	  int hours() { return hr; }	
	  int minutes() { return min; }
	  int seconds() { return sec; }
	  void advance(int =0, int =0, int =1);
	  void reset(int =0, int =0, int =0);
	  void print() { cout << hr << ":" << min << ":" << sec; }
  private:
	  int hr, min, sec;
	  void normalize();
};

int main()
{ Time t(14,58,03);
  t.print();
  cout << endl;
  t.advance();
  t.print();
  cout << endl;
  t.advance(3,5,2);
  t.print();
  cout << endl;
}

void Time::normalize()
{ min += sec/60;
  hr += min/60;
  hr %= 24;
  min %= 60;
  sec %= 60;
}

void Time::advance(int h, int m, int s)
{ hr += h;
  min += m;
  sec += s;
  normalize();
}

void Time::reset(int h, int m, int s)
{ hr = h;
  min = m;
  sec = s;
  normalize();
}
