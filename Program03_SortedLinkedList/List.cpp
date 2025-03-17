/***************************************
 * Linked List Function Declarations
 * Written by Araynah Dover
 ***************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "List.h"

/******************************
 * Constructor
 ******************************/
list::list()
{ head = NULL;
}

/******************************
 * Destructor
 ******************************/
list::~list()
{ node *p,*q;

// Check list

  if(head==NULL) return;

// Loop through list

  p = head;
  do { q = p;
       p = p->next;
       delete q;
     } while(p!=head);
}

/******************************
 * Insert
 ******************************/
bool list::insert(int id,string first,string last,int age)
{
    
    node* p = new node(id,first, last, age);
    if(p==NULL) return false;

    // Case 1: The list is empty
    if (head == nullptr) {
        head = p;
        p->next = head;  // Points to itself, circular reference
        return true;
    }

    // Case 2: The list is not empty, find the last node
    node* current = head;

    // Traverse the list to find the last node (the one whose next points to head)
    while (current->next != head) {
        current = current->next;
    }

    // Insert the new node at the end of the list
    current->next = p;
    p->next = head;  // The new node points back to the head

    return true;
}

/******************************
 * Find
 ******************************/
node* list::find(string first, string last)
{
    node* current = head;

    while (current != NULL) 
    { 
        // Check for a match

            if (current->first_name == first && current->last_name == last) 
            { 
                return current; // Return pointer to the found node
            }
            current = current->next; // Move to the next node
        }
        
        return NULL; // Return NULL if no match is found
}

/******************************
 * Remove()
 ******************************/

 bool list::remove(string first, string last)
 {
    node *q = find(first, last);

    if (q == NULL) return false; // Node not found

    // If the list contains only one node
    if (q == head && head->next == head) {
        delete q;
        head = NULL;
        return true;
    }

    // If the node to be removed is the head
    if (q == head) {
        node* tail = head;
        while (tail->next != head) {
            tail = tail->next;
        }
        tail->next = head->next; // Set the tail's next to head's next
        head = head->next; // Move head
        delete q;
        return true;
    }

    // Find the node before q
    node* prev = head;
    while (prev->next != q) {
        prev = prev->next;
    }

    // Unlink q from the list
    prev->next = q->next;
    delete q;

    return true;
}

/*****************************
 * foreward()
 *****************************/
void list::forwards(ostream &out)
{ 

// Check list and recurse

  if(head!=NULL) head->fore(out);

}

/*****************************
 * backward()
 *****************************/
void list::backwards(ostream &out)
{ 

// Check list and recurse

  if(head!=NULL) head->back(out);
}

/*****************************
 * length()
 *****************************/
int list::length()
{
    if (head == nullptr) return 0;

    // Initialize count with 0
    int count = 1;

    // Initialize curr with head of Linked List
    node* curr = head->next;

    // Traverse till we reach nullptr
    while (curr != nullptr) {
        
          // Increment count by 1
        count++;
        
          // Move pointer to next node
        curr = curr->next;
    }
      
      // Return the count of nodes
    return count;
}