/***********************************
 * Graph declaration
 * Written by Araynah Dover
 ***********************************/

#include "Node.h"

class graph
{
    public:
        graph();                                    // Constructor
        ~graph();                                   // Destructor
        void insert(string,string,int);             // Insert Edge
        void show(ostream&);                        // Show Current Node
        void depth(ostream&);                       // Depth-first Display
        void move(string);                          // Move Curr Ptr to Match
        void path(ostream&, string);                // Display Path
    
    private:
        int n;                                      // # Nodes
        node *head, *current;                       // Head/current node
};