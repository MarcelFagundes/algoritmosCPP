#include <iostream>
#include <algorithm>
#include <vector>

// Função para imprimir uma permutação
void printPermutation(const std::vector<int>& perm) {
    for (int num : perm) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> perm = {1, 2, 3};

    std::cout << "Permutações de {1, 2, 3} em ordem lexicográfica:" << std::endl;
    
    // Gera permutações lexicográficas
    do {
        printPermutation(perm);
    } while (std::next_permutation(perm.begin(), perm.end()));

    return 0;
}