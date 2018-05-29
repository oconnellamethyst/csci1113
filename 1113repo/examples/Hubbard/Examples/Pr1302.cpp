//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Problem 13.2, page 319
//  Search Function

#include<iostream>
using namespace std;
#include <string>

template <class T>
int search(T a[], T key, int first, int last)
{ 
  while ( first <= last )
    {
      int mid = (first+last)/2;
      if (key<a[mid]) last = mid-1;
      else if (key > a[mid]) first = mid+1;
      else return mid;
    }
  return -1;
}

string names[] = {"Adams", "Black", "Cohen", "Davis", "Evans", "Frost",
                  "Green", "Healy", "Irwin", "Jones", "Kelly", "Lewis"};

int main()
{
  string name;
  while (cin>>name)
  {
    int location = search(names, name, 0, 9);
    if (location == -1) cout << name << " is not in the list.\n";
    else cout << name << " is in position " << location << endl;
  }
}
