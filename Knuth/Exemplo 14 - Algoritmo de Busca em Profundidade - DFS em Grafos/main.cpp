#include <iostream>
#include <vector>

// Função para realizar DFS em um grafo
void DFS(const std::vector<std::vector<int>>& graph, std::vector<bool>& visited, int v) {
    visited[v] = true;
    std::cout << v << " ";

    // Percorre todos os vértices adjacentes
    for (int adj : graph[v]) {
        if (!visited[adj]) {
            DFS(graph, visited, adj);
        }
    }
}

int main() {
    int n = 5; // Número de vértices
    std::vector<std::vector<int>> graph(n);

    // Lista de adjacências
    graph[0] = {1, 2};
    graph[1] = {0, 3, 4};
    graph[2] = {0};
    graph[3] = {1};
    graph[4] = {1};

    std::vector<bool> visited(n, false);

    std::cout << "DFS começando no vértice 0:" << std::endl;
    DFS(graph, visited, 0);

    return 0;
}