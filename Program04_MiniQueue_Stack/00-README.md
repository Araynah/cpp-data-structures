# Program 04 - MiniQueue & MiniStack (Templates & Inheritance)  

## 📌 Overview  
This program demonstrates **Templates & Inheritance** by implementing:  
✔️ **MiniQueue (FIFO)** - First In, First Out  
✔️ **MiniStack (LIFO)** - Last In, First Out  
✔️ **Base Class `MiniList`** - Stores up to 10 dynamic elements  

## 📂 File Structure  
- `main.cpp` → Driver program **(DO NOT MODIFY)**  
- `minilist.h / minilist.cpp` → Base class `MiniList`  
- `miniqueue.h / miniqueue.cpp` → Derived class `MiniQueue`  
- `ministack.h / ministack.cpp` → Derived class `MiniStack`  

## 🔧 Compilation & Execution  
```bash
g++ -o minidata main.cpp minilist.cpp miniqueue.cpp ministack.cpp
./minidata


Example Operations:
Queue:
- Push(1) → Push(2) → Push(3)
- Pop() → Outputs 1 (FIFO)

Stack:
- Push(1) → Push(2) → Push(3)
- Pop() → Outputs 3 (LIFO)