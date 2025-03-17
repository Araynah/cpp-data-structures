/***********************************
 * Program 03
 * Written by Mark M Bowman
 ***********************************/ 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#include "List.h"

/***********************************
 * Main
 * Test function - DO NOT CHANGE
 ***********************************/ 
int main()
{ int id,age;
  list a;
  node *p;
  string fname,first,last;
  fstream infile;

// Get file name

  cout << "Enter file name: ";
  cin >> fname;

// Open file

  infile.open(fname,ios::in);

// Loop through file

  while(!infile.eof())
    { infile >> id >> first >> last >> age;
    
// Process if okay

      if(infile.good())
        a.insert(id,first,last,age);
    };

// Close

  infile.close();
  cout << endl << a.length() << " nodes" << endl;
  cout << "len fun?";

// Find node

  cout << endl;
  cout << "Enter First and Last name: ";
  cin >> first >> last;

  cout << endl << "Find: ";
  p = a.find(first,last);
  if(p!=NULL)
    { cout << "Found!" << endl;
      p->put(cout);
    }
  else
    cout << "Not found" << endl;

// Remove from list

  cout << endl << "Remove: ";
  if(a.remove(first,last))
    { cout << "Success!" << endl;
      cout << a.length() << " nodes" << endl;
    }
  else
    cout << "Fail" << endl;

// Display forwards

  cout << endl;
  cout << "Forwards List\n--------------\n";
  a.forwards(cout);
  cout << endl;

// Display backwards

  cout << "Backwards List\n--------------\n";
  a.backwards(cout);
  cout << endl;
}
