#include <iostream>
#include <vector>

// Função para gerar todos os subconjuntos de um conjunto dado
void generateSubsets(const std::vector<int>& set) {
    int n = set.size();
    int subsetCount = 1 << n; // 2^n subconjuntos

    for (int i = 0; i < subsetCount; i++) {
        std::cout << "{ ";
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                std::cout << set[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}

int main() {
    std::vector<int> set = {1, 2, 3};

    std::cout << "Subconjuntos de {1, 2, 3}:" << std::endl;
    generateSubsets(set);

    return 0;
}