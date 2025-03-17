/************************************
 * Node.cpp
 * Written by Araynah Dover
 ************************************/
#include <iostream>
#include <string>
using namespace std;

#include "Node.h"

/************************************
 * node()
 ************************************/
node::node()
{
    int i;

    value = "";
    edge_len = 0;              
    edge_cap = 2;              
    for(i=0;i<EDGE_MAX;i++)
    edges[i] = NULL;
    next = NULL;
    visit = false;
}

/************************************
 * ~node()
 ************************************/
node::~node()
{
    if(next!=NULL) delete next;
    if (edges != NULL) delete[] edges;
}

/************************************
 * put()
 ************************************/
void node::put(ostream &out)
{
    int i;

// Print the node's value

    out << value << endl;


// Print the values of immediate neighbors

    for (i = 0; i < edge_cap; ++i) 
    {
        if (edges[i] != NULL) 
        {

        // Indentation output

            out << "  " << edges[i] << value << endl;
        }
    }
}