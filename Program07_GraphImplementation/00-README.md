# Program 07 - Graph Implementation (Directed Graph)  

## 📌 Overview  
This program builds a **Directed Graph** using an adjacency list.  
✔️ **Insert Edges** (Weighted connections between nodes)  
✔️ **Depth-First Search (DFS)**  
✔️ **Find Shortest Path (Greedy Algorithm)**  

## 📂 File Structure  
- `main.cpp` → Driver program **(DO NOT MODIFY)**  
- `graph.h / graph.cpp` → Manages `Graph` class  
- `node.h / node.cpp` → Defines `Node` class (each graph node)  
- `edge.h / edge.cpp` → Defines `Edge` class (connections between nodes)  

## 🔧 Compilation & Execution  
```bash
g++ -o graph main.cpp graph.cpp node.cpp edge.cpp
./graph

Example Input (Graph Structure):

A → B (10)
A → D (5)
D → C (4)
C → B (8)
C → F (3)

Expected Output:

Depth-First Traversal: A → D → C → B → F
Shortest Path (A to B): A → D → C → B (Cost: 9)