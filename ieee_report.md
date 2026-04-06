# Delivery Route Graph CRUD – Package Delivery Service

## Authors
Kundhana, Rakshitha  
Section 5  

---

## Abstract
This project presents a Delivery Route Management System using a Graph Data Structure. Locations are represented as nodes and routes as edges with distances. The system supports CRUD operations such as adding, updating, deleting, and searching routes. It is implemented in C using an adjacency matrix.

---

## Keywords
Graph, Adjacency Matrix, CRUD Operations, Data Structures, C Programming

---

## 1. Introduction
Delivery companies handle many routes between different locations. Managing these routes manually is difficult. This project uses a graph-based system to efficiently manage delivery routes using CRUD operations.

---

## 2. Problem Statement
The system must allow users to add, update, delete, and search delivery routes efficiently.

---

## 3. Objectives
- Implement a graph-based delivery system  
- Perform CRUD operations  
- Develop a menu-driven program  
- Demonstrate real-world application  

---

## 4. Methodology

### 4.1 Data Structure Used
- Graph Data Structure  
- Nodes → Locations  
- Edges → Routes  
- Weights → Distance  

### 4.2 Implementation Concepts
- Structures  
- Functions  
- Arrays  
- Adjacency Matrix  

---

## 5. System Design

### Modules
- Add Location  
- Add Route  
- Delete Route  
- Update Route  
- Search Route  
- Display Routes  

### Algorithm Overview

**Add Location**
- Enter location name  
- Store in array  

**Add Route**
- Enter source and destination  
- Enter distance  
- Store in matrix  

**Delete Route**
- Enter locations  
- Set value to 0  

**Update Route**
- Search route  
- Modify distance  

**Display Routes**
- Traverse matrix  
- Print routes  

---

## 6. Implementation
The project is implemented in C programming using structures and functions. A menu-driven interface is used for user interaction.

---

## 7. Results
The system successfully performs all CRUD operations. Routes are displayed with distances clearly.

---

## 8. Advantages
- Efficient route management  
- Easy to use  
- Real-world application  
- Simple design  

---

## 9. Limitations
- Limited number of locations  
- No graphical interface  
- No shortest path algorithm  

---

## 10. Future Scope
- Add Dijkstra algorithm  
- Develop GUI  
- Improve scalability  
- Use dynamic memory  

---

## 11. Conclusion
The project demonstrates how graph data structures can be used in real-world delivery systems to manage routes efficiently.

---

## References
1. Data Structures using C – Reema Thareja  
2. Introduction to Algorithms – Cormen  
3. IEEE Papers on Graph Applications  