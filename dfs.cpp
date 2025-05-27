#include "dfs.h"

#include <iostream>
#include <vector>

void runDfs(const Graph& graph, std::vector<bool>& visited, int startVertex)
{
    visited.at(startVertex) = true;

    for (const auto neighbor : graph.getAdjacencyAt(startVertex))
    {
        if (!visited.at(neighbor))
        {
            std::cout << "\tTo visit " << neighbor << std::endl;
            runDfs(graph, visited, neighbor);
        }
    }

    std::cout << "Visiting " << startVertex << std::endl;
}

void dfs(const Graph& graph, int startVertex)
{
    auto visited = std::vector<bool>(graph.getVerticesCount());

    runDfs(graph, visited, startVertex);

    std::cout << "All visited" << std::endl;
}
