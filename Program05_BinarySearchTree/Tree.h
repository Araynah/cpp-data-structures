#ifndef TREE_HPP
#define TREE_HPP 
/**********************************************
 * Tree.h
 * Written by Araynah Dover
 **********************************************/
#include<iostream>

#include "Node.h"
#define TREE_MAX  1024

class tree
{ 
    public:
        tree();                         // Constructor
        ~tree();                        // Destructor        
        void show(string, ostream&);    // Show
        bool find(string);              // Find
        bool insert(string);            // Insert W/ String 
    private:
        void insert(node* p);           // Insert W/ Node
        node *root;
};
#endif