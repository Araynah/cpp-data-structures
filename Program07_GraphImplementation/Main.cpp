/***********************************
 * Program 07
 * Written by Mark M Bowman
 ***********************************/ 

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include "Graph.h"

/****************************
 * main()
 ****************************/
void main()
{ int dist;
  string fname,s,t;
  char method;
  fstream in;
  graph g;

// Open file

  cout << "Enter file name: ";
  cin >> fname;
  in.open(fname.data(),ios::in);

// Load file

  while(!in.eof())
    { in >> s >> t >> dist;
      if(in.good()) g.insert(s,t,dist);
    };

// Close file

  in.close();

// Loop to display graph

  method = 0;

  while(method!='Q')
    {

// Display

      cout << endl;
      g.show(cout);

// Menu

      cout << "M)ove, S)earch, P)ath, Q)uit: ";
      cin >> s;
      method = toupper(s[0]);
      cout << endl;

// Move

      if(method=='M')
        { cout << "Enter node: ";
          cin >> s;
          g.move(s);
        };

// Search

      if(method=='S') g.depth(cout);

// Path

      if(method=='P')
        { cout << "Enter destination node: ";
          cin >> s;
          g.path(cout,s);
        };
    };

// Done

  cout << "Thank you!" << endl;
}
