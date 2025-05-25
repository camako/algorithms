#include "bfs.h"

int main()
{
    auto graph = Graph{5};
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(0, 3);
    graph.addEdge(2, 1);
    graph.addEdge(2, 4);

    bfs(graph, 0);

    return 0;
}
