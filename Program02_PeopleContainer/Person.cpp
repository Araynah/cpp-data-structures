/***********************************
 * Person Class Definitions
 * Written by Araynah Dover 
 ***********************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Person.h"

/**********************************
 * Null constructor
 **********************************/
person::person() :id(0), first_name(""), last_name(""), age(0)
{ 
     
}

/**********************************
 * Get Function
 **********************************/
bool person::get(istream &in)
{

// Read in first, last, and age from input

    in >> id >> first_name >> last_name >> age;
    return in.good();
}

/**********************************
 * Put Function
 * set width for the desired output
 **********************************/
 void person::put(ostream &out)
 {
   
   out << setw(14) << left << last_name
        << setw(10) << first_name
        << setw(0) << age << endl;
 }

/**********************************
 * Comparison Operators
 * Comparing each value to one another to determine
 * Which retrun statement is approptiate
 **********************************/
bool person::operator > (person other)
{
    if (last_name > other.last_name) return true;
    if (last_name == other.last_name && first_name > other.first_name) return true;
    if (last_name == other.last_name && first_name == other.first_name && age > other.age) return true;
    return false;
}

/**********************************
 * Less than operator <() person
 **********************************/
bool person::operator < (person other)
{
    if (last_name < other.last_name) return true;
    if (last_name == other.last_name && first_name < other.first_name) return true;
    if (last_name == other.last_name && first_name == other.first_name && age < other.age) return true;
    return false;
}

/**********************************
 * Equal than operator <() person
 **********************************/
bool person::operator == (person other)
{
    return (last_name == other.last_name &&
            first_name == other.first_name &&
            age == other.age);
}

/**********************************
 * Equal than operator <() int
 **********************************/
bool person::operator == (int arg)
{
    return id == arg;
}