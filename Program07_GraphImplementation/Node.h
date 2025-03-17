/***********************************
 * Node declaration
 * Written by Araynah Dover
 ***********************************/
#include <ostream>
using namespace std;

#include "Edge.h"
#define EDGE_MAX  2

class graph;

class node
{   friend class graph;
    public:
        node();                             // Constructor
        ~node();                            // Destructor
        void put(ostream &);                // Output node
        void connect(node *,int);           // Connect this node to another
        void depth(ostream &);              // Depth-first search;

    private: 
        string value;                       // Stored value
        bool visit;                         // Visisted check
        int edge_len, edge_cap;             // # out edges & # elements
        edge *edges[EDGE_MAX];                        // Ptr to array of edges
        node *next;                         // Ptr to next node
};  