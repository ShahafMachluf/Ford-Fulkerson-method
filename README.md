# Ford Fulkerson method

This application impliments Ford–Fulkerson method, that computes the maximum flow in a flow network.

This application receives a graph that represented in a text file.
The file should contain the following lines:
1. Number of vertices (N).
2. Number of edges (M).
3. Starting vertex (between 1-N).
4. End vertex (between 1-N).
5. M lines, each line represents an edge.

Each line that represents an edge should contain a source vertex (between 1-N), destination vertex (between 1-N) and the capacity of the edge (a positive integer).
For example an edge from vertex 5 to vertex 9 with the capacity of 12 will be written: 5 9 12.

The application finds the results in two ways:
1. By finding the augmenting path using BFS.
2. By finding the augmenting path using greedy algorithm (variation of Dijkstra)
