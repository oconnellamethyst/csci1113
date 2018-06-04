//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Ratio.h
//  Interface for the Ratio class

//  WARNING: early version of the Microsoft Visual C++ compiler
//  do not allow the "using namespace std;" statement before
//  the declaration of a friend function. To resolve that conflict,
//  remove the "using namespace std;" statement below and replace
//  ostream with std::ostream and istream with std::istream:
//    friend std::ostream& operator<<(std::ostream&, const Ratio&);
//    friend std::istream& operator>>(std::istream&, Ratio&);

#include <iostream>
using namespace std;

class Ratio
{ // instances represent fractions
    friend ostream& operator<<(ostream&, const Ratio&);
    friend istream& operator>>(istream&, Ratio&);
    friend bool operator==(const Ratio&, const Ratio&);
    friend bool operator<(const Ratio&, const Ratio&);
    friend Ratio operator-(const Ratio&);
    friend Ratio operator+(const Ratio&, const Ratio&);
    friend Ratio operator-(const Ratio&, const Ratio&);
    friend Ratio operator*(const Ratio&, const Ratio&);
    friend Ratio operator/(const Ratio&, const Ratio&);
  public:
    Ratio(int=0,int=1);
    Ratio(const Ratio&);
    Ratio& Ratio::operator=(const Ratio&);
    Ratio& operator*=(const Ratio&);
    Ratio operator++();     // pre-increment
    Ratio operator++(int);  // post-increment
    int& operator[](int);
    int numerator() const;
    int denominator() const;
    Ratio reciprocal() const;
    void invert();
    operator double() const;
    void print() const;
  private:
    int num;
    int den;
    void reduce();
    // INVARIANT: den > 0 && gcd(num,den) == 1
};
