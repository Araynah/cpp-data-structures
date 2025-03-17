# Program 02 - People Container Class  

## 📌 Overview  
This program implements a **People container class** that stores an array of `Person` objects.  
It reads input from a file and supports various operations like:  
✔️ **Insertion** (maintaining sorted order)  
✔️ **Deletion** (remove a person by ID)  
✔️ **Searching** (find a person by ID)  
✔️ **Displaying stats** (total count, average age)  

## 📂 File Structure  
- `main.cpp` → Main driver program  
- `people.h / people.cpp` → `People` class (Container for `Person` objects)  
- `person.h / person.cpp` → `Person` class (Defines individual people)  
- `data/` → Contains input text files used for testing  

## 🔧 Compilation & Execution  
To compile using `g++`:
```bash
g++ -o people main.cpp people.cpp person.cpp
./people
