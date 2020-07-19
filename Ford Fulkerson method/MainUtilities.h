#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include "Graph.h"
using namespace std;


class MainUtilities
{
public:
    
    static void RunFordFulkersonWithBFS(Graph& i_Graph, int i_StartingVertex, int i_EndVertex);
    static void checkIfStringIsNumber(char* i_String);
    static void RunFordFulkersonWithDijkstra(Graph& i_Graph, int i_StartingVertex, int i_EndVertex);
    static void PrintResults(Graph& i_ResidualGraph, List<int>& i_SList, List<int>& i_TList, int i_MaxFlow, int i_NumberOfIterations);
    static char* CheckSingleNumberInput(char* i_LineFromFile);
};