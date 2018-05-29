//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.2, page 274
//  A Date Class

#include <iostream>
using namespace std;
#include <string>

class Date
{
  friend istream& operator>>(istream&, Date&);
  friend ostream& operator<<(ostream&, const Date&);
public:
  Date(int m=0, int d=0, int y=0) : month(m), day(d), year(y) { }
  void setDate(int m, int d, int y) { month = m; day = d; year = y; }
private:
  int month, day, year;
};

istream& operator>>(istream& in, Date& x)
{
  in >> x.month >> x.day >> x.year;
  return in;
}

ostream& operator<<(ostream& out, const Date& x)
{
  static char* monthName[13] = {"","January","February","March","April","May","June","July","August","September","October","November","December"};
  out << monthName[x.month] << ' ' << x.day << ", " << x.year;
  return out;
}

int main()
{
  Date peace(11,11,1918);
  cout << "World War I ended on " << peace << ".\n";
  peace.setDate(8,14,1945);
  cout << "World War II ended on " << peace <<  ".\n";
  cout << "Enter month, day, and year: ";
  Date date;
  cin >> date;
  cout << "The date is " << date << ".\n";
}
