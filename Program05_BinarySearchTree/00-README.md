# Program 05 - Binary Search Tree  

## 📌 Overview  
This program implements a **Binary Search Tree (BST)** to store and retrieve values efficiently.  
✔️ **Insert** values while maintaining BST structure  
✔️ **Search** for a value in the tree  
✔️ **Display values in sorted order (Inorder traversal - LMR)**  

## 📂 File Structure  
- `main.cpp` → Driver program
- `tree.h / tree.cpp` → Manages the `BinarySearchTree` class  
- `node.h / node.cpp` → Defines `Node` class (stores value & child pointers)  

## 🔧 Compilation & Execution  
```bash
g++ -o bst main.cpp tree.cpp node.cpp
./bst

Example Input:

Insert: 50, 30, 70, 20, 40, 60, 80

Expected Output (Inorder Traversal - LMR):
20, 30, 40, 50, 60, 70, 80
