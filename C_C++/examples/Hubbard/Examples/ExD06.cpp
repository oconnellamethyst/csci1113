//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.6 on page 360
//  Using a priority_queue object

#include <iostream>
#include <queue>
using namespace std;

int main()
{ priority_queue<string> pq;
  pq.push("Japan");
  pq.push("Japan");
  pq.push("Korea");
  pq.push("China");
  pq.push("India");
  pq.push("Nepal");
  pq.push("Qatar");
  pq.push("Yemen");
  pq.push("Egypt");
  pq.push("Zaire");
  pq.push("Libya");
  pq.push("Italy");
  pq.push("Spain");
  pq.push("Chile");
  while (!pq.empty())
  { cout << pq.top() << "\n";  
    pq.pop();
  }
}
