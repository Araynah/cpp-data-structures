# Program 03 - Sorted Linked List  

## 📌 Overview  
This program implements a **Sorted Linked List** using a `Node` class.  
✔️ **Insertion** (Maintains alphabetical order)  
✔️ **Find/Search** (Locate a node by First & Last Name)  
✔️ **Deletion** (Remove a node from the list)  
✔️ **Forward & Reverse Traversal**  

## 📂 File Structure  
- `main.cpp` → Driver program 
- `node.h / node.cpp` → Defines the `Node` class  
- `list.h / list.cpp` → Manages linked list operations  

## 🔧 Compilation & Execution  
```bash
g++ -o sorted_list main.cpp list.cpp node.cpp
./sorted_list

Example Input:

103 Alice Johnson 40
202 Jane Smith 25
101 John Doe 30

Expected Output:
Jane Smith, Age 25
John Doe, Age 30
Alice Johnson, Age 40
