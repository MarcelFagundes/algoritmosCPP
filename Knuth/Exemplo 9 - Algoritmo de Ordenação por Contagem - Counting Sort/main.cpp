#include <iostream>
#include <vector>
#include <algorithm> // Para std::max

// Função de ordenação por contagem (Counting Sort)
void countingSort(std::vector<int>& arr) {
    int maxElement = *std::max_element(arr.begin(), arr.end());
    std::vector<int> count(maxElement + 1, 0);

    // Conta a ocorrência de cada número
    for (int num : arr) {
        count[num]++;
    }

    // Reorganiza o array original com base na contagem
    int index = 0;
    for (int i = 0; i <= maxElement; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main() {
    std::vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    std::cout << "Array original: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    countingSort(arr);

    std::cout << "Array ordenado: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}