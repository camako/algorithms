#include <list>
#include <vector>

class Graph
{
public:
    explicit Graph(size_t size);

    void addEdge(int src, int dst);

    size_t getVerticesCount() const;

    const std::list<int>& getAdjacencyAt(size_t vertex) const;

private:
    size_t                       m_verticesCount;
    std::vector<std::list<int>>* m_adjacencyList;
};
