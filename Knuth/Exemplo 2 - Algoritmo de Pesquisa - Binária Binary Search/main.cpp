#include <iostream>
#include <vector>

// Função de pesquisa binária
int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Verifica se o target está no meio
        if (arr[mid] == target) {
            return mid;
        }

        // Se o target for maior, ignora a metade esquerda
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // Se o target for menor, ignora a metade direita
        else {
            high = mid - 1;
        }
    }

    // Retorna -1 se o elemento não for encontrado
    return -1;
}

int main() {
    std::vector<int> arr = {2, 3, 4, 10, 40};
    int target = 40;

    int result = binarySearch(arr, target);
    if (result != -1) {
        std::cout << "Elemento encontrado no índice " << result << std::endl;
    } else {
        std::cout << "Elemento não encontrado no array" << std::endl;
    }

    return 0;
}