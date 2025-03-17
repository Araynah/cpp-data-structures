/***********************************
 * Edge declaration
 * Written by Araynah Dover
 ***********************************/

class node;

class edge
{   friend class node;
    public:
        edge(node *argt=NULL,float argw=0.0F);  // Constructor
    
    private:
        float weight;                           // Distance to target
        node *target;                           // Ptr to target node
};