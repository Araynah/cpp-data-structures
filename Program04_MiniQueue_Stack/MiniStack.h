#ifndef MINIS_HPP
#define MINIS_HPP 
/***********************************
 * MiniStack
 * Written by Araynah Dover
 ***********************************/

template <class item>
class ministack:public minilist<item>
{
    public:
        ministack();
        bool push(item);
        bool pop();
        item top();
   private:
      using minilist<item>::n;   
      using minilist<item>::data;
};

template <class item>
ministack<item>::ministack() : minilist<item>() 
{ 
}

/**********************************
 * Push()
 **********************************/
template <class item>
bool ministack<item>::push(item arg)
{

// Check for overflow

  if(n>=LIST_MAX) 
  {
    cout << "Stack Overflow" << endl;
    return false;
  }

// Add at top

  data[n++] = arg;

// Success

  return true;
}

/**********************************
 * Pop()
 **********************************/
template <class item>
bool ministack<item>::pop()
{

// Check for underflow

  if(n<=0) 
  {
    cout << "Stack Underflow" << endl;
    return false;
  }

// Remove

  n--;

// Success

  return true;
}

/**********************************
 * Top()
 **********************************/
template <class item>
item ministack<item>::top()
{
    item temp{};

// Check for underflow

    if(n<=0) 
    {
        cout << "Stack Underflow" << endl;
        return temp;
    }

// Success

  return data[n-1];

}

#endif