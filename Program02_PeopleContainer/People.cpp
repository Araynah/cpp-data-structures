/***********************************
 * People Class Definitions
 * Written by Araynah Dover 
 ***********************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "People.h"

/**********************************
 * Null constructor people()
 **********************************/
people::people()
{
// Set len and cap sizes to 0

    len = 0;

// Initalize a dynamic array

    map = new person[LIST_SIZE];
}

/*************************************
 * ~people() Destructor
 *************************************/
people::~people()
{
// Delete dynamic array after use

	if (map != NULL) delete[] map;
}

/*************************************
 * insert()
 *************************************/
bool people::insert(person arg)
{  int i,j;

// Check to see if there is room

    if(len>=LIST_SIZE) return false;

    for (i = 0; i < len; i++) 
    {
        if (map[i] == arg) 
		{

// Person(ID) already exists; return false

            return false;
        }
    }

// Add to array
  
    map[len++] = arg;

// sort array

    for (i = 0; i < len - 1; i++) 
    {
        for (j = 0; j < len - i - 1; j++) 
        {	 
            // Compare the last names in list
            if (map[j] > map[j+1]) 
            { 
            // Swap map[j] and map[j + 1] if last name is greater
                swap(map[j], map[j + 1]);
            }
        }
    }
  
// Return success

  return true;
}

/*************************************
 * display()
 * Function displays Each person
 *************************************/
void people::display(ostream &out)
{ 	int i,age_tot;
    age_tot = 0;

// Sent output of headers and dashes to out

	out << left << setw(6) << "ID" << left << setw(16) << "Last" << left << setw(10) << "First" << setw(6) << "Age" << endl;
	out << "----  --------------  --------  ---" << endl;

// Loop through person and send each person to out

	for (i=0; i < len; i++)
	{
		out << left << setw(6) << map[i].id << setw(16) << map[i].last_name << setw(11) << map[i].first_name;
		out << setw(8) << map[i].age << endl;

        age_tot += map[i].age;                              // Total age to get avg
	}
    out << "----  --------------  --------  ---" << endl;
    out << setw(6) << "      " << left << setw(3) << len << setw(13) << "Persons" << left << setw(11);
    out << "Average" << setw(7) << age_tot/len << endl;     // Out put avg by diving total count by length
    out << endl;
}

/*************************************
 * Find()
 * Given id see if that person is in
 *************************************/
bool people::find(int id)
{   int i;
    for (i = 0; i < len; i++) 
    {
        if (map[i].id == id) 
		{

        // Person(ID) exists return true

            return true;
        }
    }
    return false; 
}

/*************************************
 * remove() removes person 
 ************************************/
 void people::remove(int id)
 {
	 int i,pos;					// Initalize i and pos
	 pos = -1;					// Set pos to -1 for future check

// For check to loop through map
	
	for (i = 0; i < len; i++)
	{

		if (map[i].id == id)			// Check oif curr id == input id
		{
			pos = i;				    // Set pos = to i where arg was found
		}
		if (pos != -1 && i < len - 1)	// Check to make sure arg was in map and i hasnt reached end
        {
        	map[i] = map[i + 1];        // set current map pos to next
        }
	}
	if (pos != -1) len--;				// Deincrement size if arg found
 }