#include <iostream>
#include <vector>

// Função de backtracking para gerar combinações
void generateCombinations(std::vector<int>& comb, int n, int k, int start) {
    if (comb.size() == k) {
        for (int num : comb) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = start; i <= n; ++i) {
        comb.push_back(i);
        generateCombinations(comb, n, k, i + 1);
        comb.pop_back(); // backtrack
    }
}

int main() {
    int n = 5, k = 3;
    std::vector<int> comb;

    std::cout << "Combinações de 3 números entre 1 e 5:" << std::endl;
    generateCombinations(comb, n, k, 1);

    return 0;
}