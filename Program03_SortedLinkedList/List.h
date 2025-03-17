/***********************************
 * Linked List Class Declaration
 * Written by Araynah Dover
 ***********************************/
using namespace std;

#include "Node.h"

class list
{
    public:
        node *head;
        list();                                                     // Constructor
        ~list();                                                    // Destructor
        bool insert(int id,string first,string last,int age);              // Add 
        node* find(string first, string last);                      // Find node
        bool remove(string first, string last);                     // Remove node
        void forwards(ostream &out);                                // Out list
        void backwards(ostream &out);                               // Out list reverse
        int length();                                               // Number of nodes
};
