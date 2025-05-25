#include "graph.h"

#include <iostream>

Graph::Graph(size_t size)
{
    m_verticesCount = size;
    m_adjacencyList = new std::vector<std::list<int>>{m_verticesCount, std::list<int>{}};
}

void Graph::addEdge(int src, int dst)
{
    std::cout << "Adding edge : " << src << "<->" << dst << std::endl;
    m_adjacencyList->at(src).push_back(dst);
    m_adjacencyList->at(dst).push_back(src);
}

size_t Graph::getVerticesCount() const
{
    return m_verticesCount;
}

const std::list<int>& Graph::getAdjacencyAt(size_t vertex) const
{
    return m_adjacencyList->at(vertex);
}
