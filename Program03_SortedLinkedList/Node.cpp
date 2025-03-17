/***********************************
 * Node Function Declarations
 * Written by Araynah Dover
 ***********************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Node.h"

/******************************
 * Node() Constructor
 ******************************/
node::node(int id,string arg1,string arg2,int arg3)
{
    ID = id;
    first_name = arg1;
    last_name = arg2;
    Age = arg3;
    next = NULL;
}

/******************************
 * ~Node() Destructor
 ******************************/
node::~node()
{ 
    if(next!=NULL) delete next;
}

/*****************************
 * Output put()
 *****************************/
void node::put(ostream &out)
{ 
  out << setw(14) << last_name;
  out << setw(8)  << first_name;
  out << setw(8)  << Age;
}

/*****************************
 * fore() 
 *****************************/
void node::fore(ostream &out)
{

// Output node

    put(out);

// Check node does not = arg and recurse

    if (next != NULL) next->fore(out);
}

/*****************************
 * back() 
 *****************************/
void node::back(ostream &out)
{

// Check node does not = arg and recurse

    if (next != NULL) next->fore(out);

// Output node

    put(out);
}

/*****************************
 * == comparison 
 *****************************/
bool node::operator ==(node arg)
{
    return (last_name == arg.last_name &&
            first_name == arg.first_name);
}

/*****************************
 * Greater comparison 
 *****************************/
bool node::operator >(node arg)
{
    if (last_name > arg.last_name) return true;
    if (last_name == arg.last_name && first_name > arg.first_name) return true;
    if (last_name == arg.last_name && first_name == arg.first_name && Age > arg.Age) return true;
    return false;

}
/*****************************
 * Less comparison
 *****************************/
bool node::operator <(node arg)
{
    if (last_name < arg.last_name) return true;
    if (last_name == arg.last_name && first_name < arg.first_name) return true;
    if (last_name == arg.last_name && first_name == arg.first_name && Age < arg.Age) return true;
    return false;
}