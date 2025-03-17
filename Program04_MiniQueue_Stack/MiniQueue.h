#ifndef MINIQ_HPP
#define MINIQ_HPP 
/***********************************
 * MiniQueue
 * Written by Araynah Dover
 ***********************************/

template <class item>
class miniqueue:public minilist<item>
{
    public:
        miniqueue();
        bool push(item);
        bool pop();
        item front();
    private:
      using minilist<item>::n;    // "Import" n from minilist
      using minilist<item>::data;
};

/**********************************
 * Constructor
 **********************************/
template <class item>
miniqueue<item>::miniqueue() : minilist<item>() 
{ 
}
/**********************************
 * Push()
 **********************************/
template <class item>
bool miniqueue<item>::push(item arg)
{ 

// Check for overflow

  if(n>=LIST_MAX)
  {
    cout << "Queue Overflow" << endl;
    return false;
  }


// Add at back

  data[n++] = arg;

// Success

  return true;
}

/**********************************
 * Pop()
 **********************************/
template <class item>
bool miniqueue<item>::pop()
{
    int i;

// Check for underflow

  if(n<=0)
  {
    cout << "Queue Underflow" << endl; 
    return false;
  }

// Shift after deletion

  n--;
  for(i=0;i < n;i++)
    data[i] = data[i+1];

// Success

  return true;

}

/**********************************
 * Front()
 **********************************/
template <class item>
item miniqueue<item>::front()
{
// Check for underflow

    if(n<=0)
    {
        cout << "Queue Underflow" << endl;
        return item();
    }

    return data[0];
}

#endif