#ifndef Person_HPP
#define Person_HPP 

#include <iostream>
#include <string>

using namespace std;

/***********************************
 * Person Class Declaration
 * Written by Araynah Dover
 ***********************************/

class person
{ friend class people;
  public:
    person();                     // Null constructor
    bool get(istream &in);        // Input for about user
    void put(ostream &out);       // Output user info
    bool operator >  (person);    // Greater than operator
    bool operator <  (person);    // Less than operator
    bool operator == (person);    // Equal than operator
    bool operator == (int arg);   // Equal than operator to compare id
  private:
    string first_name,last_name;  // String Decleration for frist and last names
    int age,id;                   // Int Decleration for age and ID
};

#endif // Person_HPP