/************************************
 * Tree.cpp
 * Written by Araynah Dover
 ************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Tree.h"

/****************************
 * tree()
 ****************************/
tree::tree()
{ root = NULL;
}

/****************************
 * ~tree()
 ****************************/
tree::~tree()
{
    if(root!=NULL) delete root;
}

/****************************
 * insert() string insert
 ****************************/
bool tree::insert(string arg)
{

// Initalize new node

    node *p;

// Create the new node

    p = new node(arg);
    if(p==NULL) return false;

// Add to tree
    insert(p);
    return true;
}

/****************************
 * insert() node* arg
 ****************************/
void tree::insert(node *p)
{
    node *q = root;
    node *parent = NULL;

// Traverse the tree to find the correct position for the new node

    while (q != NULL)
    {
        parent = q;

        if (p->value < q->value) 
        {

        // Move to the left subtree

            q = q->left;
        } 
        else 
        {
        
        // Move to the right subtree

            q = q->right;
        }
    }

// Insert the node as a left or right child

    if (parent == NULL) 
    {
    
    // Tree was empty
    
        root = p;
    } 
    else if (p->value < parent->value) 
    {
        parent->left = p;
    } 
    else 
    {
        parent->right = p;
    }
}

/****************************
 * show()
 ****************************/
void tree::show(string order, ostream& out)
{
    if (order == "LMR" && root != NULL) root->lmr(out);
}

/****************************
 * find()
 ****************************/
bool tree::find(string arg)
{
    node *q = root; 

    while (q != NULL)
    {
        if (q->value == arg) 
            return true;
        
        // Move to the left child if arg is less than the current node's value

        if (arg < q->value)
            q = q->left;

        // Move to the right child if arg is greater than or equal

        else 
            q = q->right;
    }

    return false;
}
