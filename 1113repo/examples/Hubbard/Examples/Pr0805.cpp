//  Programming with C++, Second Edition, by John R. Hubbard
//  Copyright McGraw-Hill, 2000
//  Problem 8.5 on page 202
//  Sorts an array of strings

#include <iostream>
using namespace std;

const int NAME_LENGTH = 20;
const int MAX_NUM_NAMES = 25;
const int BUFFER_LENGTH = MAX_NUM_NAMES*(NAME_LENGTH + 1);
void input(char* buffer);
void tokenize(char** name, int& numNames, char* buffer);
void print(char** name, int numNames);
void sort(char** name, int numNames);

int main()
{ char* name[MAX_NUM_NAMES];
  char buffer[BUFFER_LENGTH+1];
  int numNames;
  input(buffer);
  tokenize(name, numNames, buffer);
  print(name, numNames);
  sort(name, numNames);
  print(name, numNames);
}

void input(char* buffer)
{ // reads up to 25 strings into buffer:
  cout << "Enter up to " << MAX_NUM_NAMES << " names, one per"
      		 << " line.  Terminate with \'$\'.\nNames are limited to "
      		 << NAME_LENGTH << " characters.\n";
  cin.getline(buffer, BUFFER_LENGTH, '$');
}

void tokenize(char** name, int& n, char* buffer)
{ // copies address of each string in buffer into name array:
  char* p = strtok(buffer, "\n");        // p points to each token
  for (n = 0; p && *p != '$'; n++)
  { name[n] = p;
    p = strtok(NULL, "\n");
  }
}

void print(char** name, int n)
{ // prints the n names stored in buffer:
  cout << "The names are:\n";
  for (int i = 0; i < n; i++)
    cout << "\t" << i+1 << ". " << name[i] << endl;
}

void sort(char** name, int n)
{ // sorts the n names stored in buffer:
  char* temp;
  for (int i = 1; i < n; i++)                         // Bubble Sort
    for (int j = 0; j < n-i; j++)
      if (strcmp(name[j], name[j+1]) > 0)
      { temp = name[j];
        name[j] = name[j+1];
        name[j+1] = temp;
      }
}
