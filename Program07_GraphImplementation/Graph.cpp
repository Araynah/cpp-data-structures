/***********************************
 * Graph.cpp
 * Written by Araynah Dover
 ***********************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Graph.h"

/****************************
 * graph()
 ****************************/
graph::graph()
{
    head = NULL;
    current = NULL;
}

/****************************
 * ~graph()
 ****************************/
graph::~graph()
{
    if(head != NULL) delete head;
    if(current != NULL) delete current;
}

/****************************
 * insert()
 ****************************/
void graph::insert(string source,string target,int weight)
{

// Initalize new node

    node *p;

// Create the new node

    p = new node();
    if(p==NULL) return;

// Add to tree
    insert(p);  
}
