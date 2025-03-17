#ifndef MINI_HPP
#define MINI_HPP 
/***********************************
 * MiniList
 * Written by Araynah Dover
 ***********************************/

#define LIST_MAX  10

template <class item>
class minilist
{ public:
    minilist();
    ~minilist();
    int size();
  protected:
    int n;
    item *data;
};

/***********************************
 * MiniList() Constructor
 ***********************************/
template <class item>
minilist<item>::minilist()
{

// Initialize len to 0 for later inc

  n = 0;

// Initalize a dynamic array

  data = new item[LIST_MAX];
}

/***********************************
 * MiniList() Destructor
 ***********************************/
template <class item>
minilist<item>::~minilist()
{

  // Delete dynamic array after use

	if (data != NULL) delete[] data;
}

/***********************************
 * MiniList() Destructor
 ***********************************/
template <class item>
int minilist<item>::size()
{

// return the length

  return n;
}

#endif