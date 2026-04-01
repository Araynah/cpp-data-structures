# C++ Data Structures & Algorithms

Implementations of fundamental data structures and algorithms in **C++**, completed as part of coursework at Michigan State University. Each program is built from scratch to reinforce understanding of memory management, object-oriented design, and algorithmic complexity.

---

## Programs

### Program 02 — People Container
A generic container class for storing and managing collections of `Person` objects. Demonstrates dynamic memory allocation, copy constructors, and operator overloading in C++.

**Concepts:** OOP, dynamic arrays, memory management, copy semantics

---

### Program 03 — Sorted Linked List
A templated linked list that maintains sorted order on insertion. Supports insertion, deletion, search, and traversal.

**Concepts:** Linked list traversal, pointer manipulation, templated classes, sorted insertion

---

### Program 04 — Mini Queue & Stack
Implementations of Queue (FIFO) and Stack (LIFO) data structures built on top of a linked list backbone.

**Concepts:** Abstract data types, FIFO/LIFO, linked list composition

---

### Program 05 — Binary Search Tree
A full BST implementation supporting insert, search, delete, and multiple traversal orders (inorder, preorder, postorder).

**Concepts:** Tree traversal, recursive algorithms, BST properties, deletion edge cases

---

### Program 07 — Graph Implementation
An adjacency-list based graph supporting both directed and undirected edges, with BFS and DFS traversal.

**Concepts:** Graph representation, BFS, DFS, adjacency lists, connected components

---

## Labs

Shorter focused exercises reinforcing and extending the concepts above.

### Lab 16 — Binary Tree Traversals
BST implementation with insertion, depth calculation, and recursive traversals (LMR, RML, MLR).

### Lab 18 — Searching Algorithms
Side-by-side comparison of Linear Search (basic and optimized) vs. Binary Search with efficiency analysis across different datasets.

### Lab 20 — Heap Sort
Binary heap implementation with insert, heapify, and remove. Uses the heap structure for in-place sorting.  
**Concepts:** Priority queues, heapify, O(n log n) sorting

### Lab 22 — Graph & DFS
Graph built with node and edge representation; Depth-First Search traversal implemented recursively.

### Lab 24 — Hash Tables & Collision Resolution
Custom hash function with linear probing for collision resolution.  
**Concepts:** Hashing, collision handling, O(1) average lookup

### Lab 25 — Concert Seat Ranking Simulation
Simulates seat value in a 20×10 concert hall — scores seats by distance from the stage and deducts value for proximity to loud superfans (adjacent and diagonal neighbors). Displays results as a grid with `*` marking superfan locations.  
**Concepts:** 2D arrays, grid-based logic, custom input parsing

---

## Skills Demonstrated

- Dynamic memory management (pointers, `new`/`delete`)
- Object-oriented programming (classes, inheritance, templates)
- Recursive algorithms
- Complexity analysis (time and space)
- Sorting and searching algorithm implementation
- Hash tables and collision resolution
- Clean, documented C++ code

---

## Repository Structure

```
cpp-data-structures/
├── data-structures/
│     ├── Program02_PeopleContainer/
│     ├── Program03_SortedLinkedList/
│     ├── Program04_MiniQueue_Stack/
│     ├── Program05_BinarySearchTree/
│     └── Program07_GraphImplementation/
├── labs/
│     ├── Lab16_BinaryTreeTraversals/
│     ├── Lab18_SearchingAlgorithms/
│     ├── Lab20_HeapSort/
│     ├── Lab22_GraphDFS/
│     ├── Lab24_HashTables/
│     └── Lab25_ConcertSeatSimulation/
└── README.md
```

---

## Tech Stack

- **Language:** C++
- **Tools:** VS Code, G++ compiler, Git

---

## Run Any Program

```bash
g++ -o output main.cpp
./output
```

---

*Michigan State University | CSE Data Structures & Algorithms coursework*
