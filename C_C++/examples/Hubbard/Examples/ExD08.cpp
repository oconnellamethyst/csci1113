//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Example D.8 on page 363
//  Using a map object

#include <iostream>
#include <map.h>
using namespace std;

struct Country
{ friend ostream& operator<<(ostream&, const Country&);
  Country();
  Country(string, string, string, int, int);
  string abbr, capital, language;
  int population, area;
};

typedef map<string,Country> Map;
typedef Map::iterator It;
typedef pair<const string,Country> Pair;
void load(Map&);
void print(Map&);
void find(Map&, const string&);

int main()
{ Map map;
  load(map);
  print(map);
  find(map,"Cuba");
  find(map,"Iran");
  find(map,"Oman");
}

ostream& operator<<(ostream& ostr, const Country& c)
{ return ostr << c.abbr << ", " << c.capital << ", " << c.language
              << ", pop=" << c.population << ", area=" << c.area;
}

Country::Country()
  : abbr(""), capital(""), language(""), population(0), area(0) { }

Country::Country(string ab, string c, string l, int p, int ar)
  : abbr(ab), capital(c), language(l), population(p), area(ar) { }

void load(Map& m)
{ m["Iran"] = Country("IR","Tehran","Persian",68959931,632457);
  m["Iran"] = Country("IR","Tehran","Farsi",68959931,632457);
  m["Peru"] = Country("PE","Lima","Spanish",26111110,496223);
  m["Iraq"] = Country("IQ","Baghdad","Arabic",21722287,167975);
  m.insert(Pair("Togo",Country("TG","Lome","French",4905824,21927)));
  m.insert(Pair("Fiji",Country("FJ","Suva","English",802611,7054)));
  m.insert(Pair("Fiji",Country("FJ","Suva","Fijian",802611,7054)));
}

void print(Map& m)
{ for (It it=m.begin(); it != m.end(); it++)
    cout << it->first << ":\t" << it->second << "\n";
  cout << "size=" << m.size() << "\n";
}

void find(Map& m, const string& s)
{ cout << s;
  It it = m.find(s);
  if (it == m.end()) cout << " was not found.\n";
  else cout << ":\t" << it->second << "\n";
}
