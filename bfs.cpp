#include "bfs.h"

#include <iostream>
#include <queue>
#include <vector>

void bfs(const Graph& graph, int startVertex)
{
    std::queue<int> verticesToVisit;
    verticesToVisit.push(startVertex);

    auto visited            = std::vector<bool>(graph.getVerticesCount());
    visited.at(startVertex) = true;

    while (!verticesToVisit.empty())
    {
        const auto visiting = verticesToVisit.front();
        std::cout << "Visiting " << visiting << std::endl;
        verticesToVisit.pop();

        for (const auto neighbor : graph.getAdjacencyAt(visiting))
        {
            if (!visited.at(neighbor))
            {
                std::cout << "\tTo visit " << neighbor << std::endl;
                visited.at(neighbor) = true;
                verticesToVisit.push(neighbor);
            }
        }
    }

    std::cout << "All visited" << std::endl;
}
