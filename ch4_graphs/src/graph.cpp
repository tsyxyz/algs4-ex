#include "ch4_graphs/graph.h"

namespace ch4_graphs {

Graph::Graph(int v)
  : v_(v), e_(0) {
    adj_.resize(v);
}

int Graph::v() const {
    return v_;
}

int Graph::e() const {
    return e_;
}

void Graph::addEdge(int v, int w) {
    adj_[v].push_back(w);
    adj_[w].push_back(v);
    e_++;
}

std::vector<int> Graph::adj(int v) {
    return adj_[v];
}

std::string Graph::toString() {
    std::string s = std::to_string(v_) + " vertices, " + std::to_string(e_) + " edges\n";
    for (int v = 0; v < v_; ++v) {
        s += std::to_string(v) + ": ";
        for (int w : adj(v)) {
            s += std::to_string(w) + " ";
        }
        s += "\n";
    }
    return s;
}

int Graph::degree(Graph g, int v) {
    int degree = 0;
    for (int w : g.adj(v)) degree++;
    return degree;
}

int Graph::maxDegree(Graph g) {
    int max = 0;
    for (int v = 0; v < g.v(); ++v) {
        if (degree(g, v) > max) {
            max = degree(g, v);
        }
    }
    return max;
}

double Graph::avgDegree(Graph g) {
    return 2 * g.e() / g.v();
}

int Graph::numberOfSelfLoops(Graph g) {
    int count = 0;
    for (int v = 0; v < g.v(); ++v) {
        for (int w : g.adj(v)) {
            if (v == w) count++;
        }
    }
    return count / 2;
}

} // namespace ch4_graphs