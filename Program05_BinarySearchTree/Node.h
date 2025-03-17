#ifndef NODE_HPP
#define NODE_HPP 
/**********************************************
 * Node.h
 * Written by Araynah Dover
 **********************************************/
#include <iostream>
using namespace std;

class tree;

class node
{ friend class tree;

    public:
        node(string arg="");                     // Constructor
        ~node();                    // Destructor
        void put(ostream& out);     // Output node
        void lmr(ostream& out);                 // Recursive LMR display
    private:
        string value;               // Value
        node *left,*right;          // Pointers to children

};
#endif