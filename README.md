# 📚 **CS-300 Course Management Program**

This repository showcases my work and understanding of **Data Structures and Algorithms** (DSA) through projects completed during the **CS300** course. The focus of the repository is on the design, implementation, and analysis of efficient data structures to manage and display course information for a Computer Science program.

## 📝 **Projects Overview**
1. **Data Structures Analysis**  
   A detailed analysis of runtime and memory usage for three data structures: **Vector**, **Hash Table**, and **Binary Search Tree (BST)**.
   
2. **Course Sorting and Printing**  
   A **C++** implementation to sort and print a list of courses in **alphanumeric order** using efficient data structures.

## ⚙️ **Project Details**

### **1. Data Structures Analysis (Project One)**
This project involved analyzing the performance of three key data structures:

- **Vector**: The performance of resizing and searching operations.
- **Hash Table**: Exploring hash collisions, probing, and search efficiency.
- **Binary Search Tree (BST)**: Analyzing tree balancing, search time complexity, and space utilization.

#### **Key Features**:
- **Comparative Analysis**: Runtime and memory usage of each data structure were compared.
- **Efficiency Evaluation**: Focused on trade-offs between time and space complexity in various operations like insertion, search, and deletion.

### **2. Course Sorting and Printing (Project Two)**
A **C++** implementation to:
- Read a list of courses from a file
- Sort them in **alphanumeric order**
- Efficiently store and print course details

#### **Key Features**:
- **Sorting & Printing**: Alphanumeric sorting of course information using optimal algorithms.
- **Error Handling**: Handling of malformed data and invalid file inputs.
- **File Parsing**: Implementation of efficient file parsing and data validation techniques.

## 🛠 **Technologies & Tools**
- **Programming Language**: C++
- **Data Structures**: Vector, Hash Table, Binary Search Tree (BST)
- **Techniques Used**: File Parsing, Sorting, Modular Code Design, Algorithm Optimization
- **Testing**: Unit testing for verifying sorting and data parsing functionalities

## 💡 **Reflection**
### **Problem Solving Approach**:
The primary problem I aimed to solve was managing and displaying course information for a Computer Science program. The challenge involved reading data from a file, storing it in efficient data structures, and implementing sorting/searching operations while optimizing runtime and memory usage.

### **Problem Solving Process**:
1. **Requirement Analysis**: I began by analyzing the system requirements and the type of operations needed (e.g., sorting, searching).
2. **Data Structure Selection**: Evaluated the advantages and disadvantages of different data structures (Vector, Hash Table, BST) based on performance, memory usage, and operation types.
3. **Implementation**: I chose the **Hash Table** for its average-case efficiency and built a modular solution that handled file parsing, data storage, sorting, and error handling.

### **Overcoming Roadblocks**:
- **File Parsing Errors**: Encountered challenges with malformed input data; solved by using **error-handling techniques** and writing unit tests for edge cases.
- **Sorting and Large Datasets**: Ensured sorting worked correctly for large datasets by testing with increasing data sizes and optimizing the algorithm for efficiency.

### **Impact on Software Design**:
This project taught me the importance of selecting the right data structure for the problem at hand. It deepened my understanding of algorithm efficiency and how performance can be influenced by the choice of data structures. Moreover, I enhanced my ability to write modular, reusable, and adaptable code by incorporating error handling and edge-case testing.

## 🔧 **Key Features & Benefits**
- **Data Structures Analysis**: Provides a comprehensive evaluation of runtime and memory efficiency for various data structures.
- **Course Management**: Effectively manages course data with efficient sorting and printing functionality.
- **Error Handling**: Built-in mechanisms to handle input errors and malformed data, ensuring robustness.
- **Modular Code**: Code is designed with modularity and reusability in mind, allowing easy updates or extensions.

## 📄 **How to Run the Project**
To run this project, clone the repository and compile the **C++** files using your preferred IDE or terminal. Here’s how you can do it:
```bash
git clone https://github.com/nwyrwas/CS-300-15095-M01-DSA-Analysis-and-Design.git
cd CS-300-15095-M01-DSA-Analysis-and-Design
# Compile the C++ files
g++ main.cpp -o course_management
# Run the compiled program
./course_management
