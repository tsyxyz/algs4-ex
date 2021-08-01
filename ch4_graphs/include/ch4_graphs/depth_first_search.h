#pragma once

#include <vector>

#include "ch4_graphs/graph.h"

namespace ch4_graphs {
class DepthFirstSearch {
public:
    DepthFirstSearch(Graph g, int s);
    bool marked(int w);
    int count();
private:
    void dfs(Graph g, int v);
private:
    std::vector<bool> marked_;
    int count_;
};


} // namespace ch4_graphs