#pragma once

#include <vector>
#include <string>

namespace ch4_graphs {

class Graph {
public:
    explicit Graph(int v);
    // Graph(In in);
    int v() const;
    int e() const;
    void addEdge(int v, int w);
    std::vector<int> adj(int v);
    std::string toString();

public:
    static int degree(Graph g, int v);
    static int maxDegree(Graph g);
    static double avgDegree(Graph g);
    static int numberOfSelfLoops(Graph g);

private:
    int v_;
    int e_;
    std::vector<std::vector<int>> adj_;
};

} // namespace ch4_graphs