//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill 2000
//  Example 12.13(b), page 288
//  A Heirarchy of a Media Class

#include <iostream>
using namespace std;
#include <string>

class Media
{
public:
  virtual void print() =0;
  virtual string id() =0;
protected:
  string title;
};

class Book : Media
{
public:
  Book(string a="", string t="", string p="", string i="")
    : author(a), publisher(p), isbn(i) { title = t; }
  void print()
  { cout << title << " by " << author << ".\nPublished by "
         << publisher << ".\n";
  }
  string id() { return isbn; }
private:
  string author, publisher, isbn;
};

class CD : Media
{
public:
  CD(string t="", string c="", string m="", string n="")
    : composer(c), make(m), number(n) { title = t; }
  void print() { cout << title << ", " << composer << endl; }
  string id() { return make + "" + number; }
private:
  string composer, make, number;
};

class Magazine : Media
{
public:
  Magazine(string t="", string i="", int v=0,  int n=0)
    : issn(i), volume(v), number(n) { title = t; }
  void print()
  {cout << title << " Magazine, Vol. " << volume << ", No. "
         << number << endl;
  }
  string id() { return issn; }
private:
  string issn, publisher;
  int volume, number;
};

int main()
{
  Book book("Bjarne Stroustrup", "The C++ Programming Language", "Addison-Wesley", "0-201-53992-6");
  Magazine magazine("TIME", "0040-781X", 145, 23);
  CD cd("BACH CANTANAS", "Johann Sabastian Bach", "ARCHIV", "D120541");
  book.print();
  cout << "\tid: " << book.id() << endl;
  magazine.print();
  cout << "\tid: " << magazine.id() << endl;
  cd.print();
  cout << "\tid: " << cd.id() << endl;
}
