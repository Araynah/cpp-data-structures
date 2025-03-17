/***********************************
 * Node Class Declaration
 * Written by Araynah Dover
 ***********************************/
using namespace std;

class node
{   friend class list;
    public:
        node(int,string,string,int);        // Constructor
        ~node();                        // Destructor
        void put(ostream& out);         // Output node
        void fore(ostream &out);        // Fore output
        void back(ostream &out);        // Back output
        bool operator ==(node);         // == comparison
        bool operator >(node);          // Greater comparison
        bool operator <(node);          // Less comparison
    private:
        int ID,Age;                     // ID, Age numbers            
        string first_name,last_name;    // Names
        node *next;                     // Next pointer
};