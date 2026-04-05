
#📦 Delivery Route Graph CRUD – Package Delivery Service



📌 Project Title
Delivery Route Graph CRUD – Package Delivery Service
________________________________________
👥 Team Members


●	Kundhana – Section 5

●	Rakshitha – Section 5

________________________________________
🎯 Problem Statement:


Delivery companies need an efficient way to manage routes between different locations. This project simulates a package delivery network using a Graph Data Structure where locations are represented as nodes and routes between them are represented as edges.
The system allows users to perform CRUD operations (Create, Read, Update, Delete) to manage delivery routes effectively.
________________________________________
📊 Data Structure Used:


This project uses a Graph Data Structure.


●	Nodes (Vertices) → Delivery locations



●	Edges → Routes between locations



●	Weight → Distance between locations


Implementation concepts used:


●	struct

●	functions

●	menu-driven program

●	dynamic memory concepts

●	adjacency matrix representation

________________________________________
⚙️ Features


The program includes the following operations:


1️⃣ Add Location – Add a new delivery location


 2️⃣ Add Route – Create a route between two locations

 
 3️⃣ Delete Route – Remove a delivery route

 
 4️⃣ Update Route – Modify the distance between locations

 
 5️⃣ Search Route – Find a route and display distance

 
 6️⃣ Display Routes – Show all delivery routes in the system
 
________________________________________
🖥️ Menu Driven Interface:


Example menu:


--- Package Delivery Route System ---

1. Add Location
2. Add Route
3. Delete Route
4. Update Route
5. Search Route
6. Display Routes
7. Exit

Enter your choice:
________________________________________
🧠 Algorithm Overview:


Add Location

1.	Enter location name

2.	Store location in array

Add Route


1.	Enter source location

2.	Enter destination location

3.	Enter distance

4.	Store distance in graph matrix

Delete Route

1.	Enter source and destination

2.	Set route value to 0

Update Route

1.	Search existing route

2.	Modify the distance

Display Routes

1.	Traverse adjacency matrix

2.	Print all routes

________________________________________
💻 Compilation Instructions:


Compile the program using GCC:
gcc main.c -o project
Run the program:
./project
________________________________________
📄 Sample Output:


--- Package Delivery Route System ---

1. Add Location
2. Add Route
3. Delete Route
4. Update Route
5. Search Route
6. Display Routes
7. Exit

Enter choice: 1
Enter location name: Chennai
Location added successfully

Enter choice: 2
Enter source location: Chennai
Enter destination location: Bangalore
Enter distance: 350

Route added successfully
________________________________________
📂 Project Structure


Delivery-Route-Graph-CRUD/

src/
  main.c

docs/
  project_report.pdf

ppt/
  presentation.pptx

README.md

sample_output.txt
