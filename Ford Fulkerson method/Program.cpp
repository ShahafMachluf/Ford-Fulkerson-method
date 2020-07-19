#include "MainUtilities.h"
/*
    instructions:
1. compile the code .
2. open command prompt and navigate to the location of the exe file.
3. execute the file through the command prompt and pass the location of the txt file that represent the graph
    for example: ("Algorithms final project.exe" C:\Temp\graph.txt)
4. the output is represent the max flow in the graph, minimum cut (sets S and T) and number of iterations of each method (BFS and Dijkstra).
*/
int main(int argc, char* argv[])
{
    int startingVertex, endVertex;
    if (argc < 2)
    {
        cout << "Invalid input" << endl;
        exit(1);
    }
    ifstream graphParameters(argv[1]);
    if (!graphParameters.is_open())
    {
        cout << "Invalid input" << endl;
        exit(1);
    }
    Graph* mainGraph = new Graph(graphParameters, startingVertex, endVertex);
    graphParameters.close();
    MainUtilities::RunFordFulkersonWithBFS(*mainGraph, startingVertex, endVertex);
    MainUtilities::RunFordFulkersonWithDijkstra(*mainGraph, startingVertex, endVertex);
    delete mainGraph;
}