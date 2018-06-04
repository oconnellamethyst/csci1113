//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 14.3 on page 333
//  A remove_duplicates() function for vectors

#include <iostream>
#include <string>
#include <vector>  
#include <algorithm>
#include <typeinfo>
using namespace std;
typedef vector<int> Ints;
typedef Ints::iterator Iit;
typedef vector<float> ScoreVector;
typedef ScoreVector::iterator ScoreVectorIterator;

float median(ScoreVector sv);
//precondition: sv is not empty
// returns average of two sorted middle values in sv
// caller's argument remains unchanged

void getScores( ScoreVector & sv);
void print(ScoreVectorIterator start, ScoreVectorIterator stop);

int main()
{
  ScoreVector scores;
  getScores( scores );
  print( scores.begin(), scores.end()-1 );
  cout << "median( scores ) = " << median(scores) << endl;
}

float median(ScoreVector v)
{
  if (v.empty()) return 0.0;
  int n = v.size();
  sort( v.begin(), v.end() );
  return (v[n/2] + v[(n-1)/2]) / 2.0;
}

void getScores(ScoreVector & sv)
{
  float nextScore;
  cout << "Enter next score or negative value to stop: ";
  cin >> nextScore;
  while (nextScore >= 0.0)
    {
      sv.push_back(nextScore);
      cout << "Enter next score or negative value to stop: ";
      cin >> nextScore;
    }
}

void print(ScoreVectorIterator start, ScoreVectorIterator stop)
{
  for (ScoreVectorIterator svIt = start; svIt<=stop; svIt++)
    cout << *svIt << endl;
}

