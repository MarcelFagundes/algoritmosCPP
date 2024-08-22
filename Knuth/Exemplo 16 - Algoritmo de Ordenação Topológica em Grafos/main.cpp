#include <iostream>
#include <vector>
#include <stack>

// Função auxiliar para a ordenação topológica
void topologicalSortUtil(const std::vector<std::vector<int>>& graph, int v, std::vector<bool>& visited, std::stack<int>& Stack) {
    visited[v] = true;

    for (int adj : graph[v]) {
        if (!visited[adj]) {
            topologicalSortUtil(graph, adj, visited, Stack);
        }
    }

    Stack.push(v);
}

// Função principal para realizar a ordenação topológica
void topologicalSort(const std::vector<std::vector<int>>& graph, int n) {
    std::stack<int> Stack;
    std::vector<bool> visited(n, false);

    // Chama a função auxiliar para todos os vértices
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            topologicalSortUtil(graph, i, visited, Stack);
        }
    }

    // Imprime a ordenação topológica
    while (!Stack.empty()) {
        std::cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main() {
    int n = 6;
    std::vector<std::vector<int>> graph(n);

    // Lista de adjacências do grafo direcionado
    graph[5] = {2, 0};
    graph[4] = {0, 1};
    graph[2] = {3};
    graph[3] = {1};

    std::cout << "Ordenação topológica do grafo:" << std::endl;
    topologicalSort(graph, n);

    return 0;
}