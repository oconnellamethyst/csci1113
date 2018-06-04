//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example 5.8 on page 94
//  The max() Function

int max(int,int);
// returns larger of the two given integers:

int max(int x, int y)
{ if (x < y) return y;
  else return x;
}
