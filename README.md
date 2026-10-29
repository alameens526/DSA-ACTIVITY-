File System Representation and Search Using BFS and DFS

📌 Project Overview

This project implements a file system representation using a graph data structure in C. Each file or directory is represented as a node, and the connections between them are represented as edges using an adjacency matrix.

The project uses two graph traversal algorithms, Breadth-First Search (BFS) and Depth-First Search (DFS), to search for a specified file node from a given starting node.

🎯 Objectives

- Represent a file system as a graph.
- Implement an adjacency matrix to store graph connections.
- Implement Breadth-First Search (BFS).
- Implement Depth-First Search (DFS).
- Display traversal orders and check whether the target file is found.

🛠️ Technologies Used

- Programming Language: C
- Data Structure: Graph
- Graph Representation: Adjacency Matrix
- Algorithms: BFS and DFS
- Compiler: GCC

⚙️ Features

- Accepts the number of nodes and edges from the user.
- Creates a graph using an adjacency matrix.
- Allows the user to select a starting node and target node.
- Displays the BFS traversal order.
- Displays the DFS traversal order.
- Reports whether the target node is found.

📂 Project Structure

File-System-BFS-DFS/
│
├── main.c
└── README.md

▶️ How to Run

Step 1: Clone the repository

git clone YOUR_GITHUB_REPOSITORY_URL

Step 2: Open the project folder

cd File-System-BFS-DFS

Step 3: Compile the program

gcc main.c -o filesystem

Step 4: Run the program

On Linux:

./filesystem

On Windows:

filesystem.exe

🧪 Sample Input

Enter number of nodes: 5
Enter number of edges: 4
Enter edge (u v): 0 1
Enter edge (u v): 0 2
Enter edge (u v): 1 3
Enter edge (u v): 2 4
Enter starting node: 0
Enter target file node: 4

📤 Sample Output

BFS Traversal: 0 1 2 3 4
BFS: File FOUND

DFS Traversal: 0 1 3 2 4
DFS: File FOUND

🧠 Algorithm Explanation

Breadth-First Search (BFS)

BFS explores connected nodes level by level using a queue. It visits neighboring nodes before exploring the next level.

Depth-First Search (DFS)

DFS explores one path as deeply as possible before backtracking. This implementation uses recursion.

Adjacency Matrix

An adjacency matrix represents graph connections:

- "1" indicates a connection between two nodes.
- "0" indicates no connection.

✅ Advantages

- Easy to understand and implement.
- Demonstrates important graph traversal algorithms.
- Helps understand graph representation using an adjacency matrix.
- Can identify target nodes reachable from the starting node.

⚠️ Limitations

- Nodes are represented using numbers instead of actual filenames.
- An adjacency matrix can consume more memory for large, sparse graphs.
- Only nodes reachable from the selected starting node are searched.
- The current implementation represents an undirected graph.

🏁 Conclusion

This project demonstrates the use of graph data structures and BFS and DFS algorithms in C. It provides a basic model for representing file and directory connections and searching for a target node.

👨‍💻 Author

Alameen S

B.Tech – Computer Science and Engineering (Cyber Security)

📚 Academic Activity

UKF College of Engineering & Technology (Autonomous)

Third Semester Activity Challenge

Challenge 17 – B 09: Data Structures and Algorithms
