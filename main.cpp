#include "bfs.h"
#include "dfs.h"

#include <iostream>

int main()
{
    std::cout << "Creating the graph" << std::endl;
    auto graph = Graph{5};
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 3);
    graph.addEdge(2, 1);
    graph.addEdge(2, 4);

    std::cout << "Traversing the graph with BFS" << std::endl;
    bfs(graph, 0);

    std::cout << "Traversing the graph with DFS" << std::endl;
    dfs(graph, 0);

    return 0;
}
