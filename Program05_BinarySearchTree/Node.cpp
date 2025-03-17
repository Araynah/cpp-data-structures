/**********************************************
 * Node.cpp
 * Written by Araynah Dover
 **********************************************/

#include <iostream>
using namespace std;

#include "Node.h"

/****************************
 * node() 
 ****************************/
node::node(string arg)
{
    value = arg;
    left = right = NULL;
}

/****************************
 * ~node()
 ****************************/
node::~node()
{
    if(left!=NULL) delete left;
    if(right!=NULL) delete right;
}

/****************************
 * put()
 ****************************/
void node::put(ostream& out)
{
    out << value << endl;
}

/****************************
 * lmr()
 ****************************/
void node::lmr(ostream& out)
{
    // Check node if not null recurse left 

	if (left != NULL) left->lmr(out);

// Output val in node

	//cout << value << ' ' << endl;
    put(out);

// Check node if not null recurse left

	if (right != NULL) right->lmr(out);
}

