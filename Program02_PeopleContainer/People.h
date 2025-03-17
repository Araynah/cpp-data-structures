#ifndef People_HPP
#define People_HPP 

using namespace std;

#define LIST_SIZE  20

#include "Person.h"

/***********************************
 * People Class Declaration
 * Written by Araynah Dover
 ***********************************/

class people
{ public:
    people();                       // Constructor - empty list
    ~people();                      // Destructor
    bool insert(person arg);        // Add a person
    void display(ostream& out);     // Output data
    bool find(int id);              // Find matching ID
    void remove(int id);        // Remove person from map
  private:
    int len;                        // Numbers of objects
    person *map;                    // An array of persons
};
#endif