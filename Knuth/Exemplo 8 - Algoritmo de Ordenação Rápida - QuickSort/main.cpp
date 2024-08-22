#include <iostream>
#include <vector>

// Função para particionar o array
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Pivô
    int i = (low - 1);     // Índice do menor elemento

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]); // Troca elementos
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return (i + 1);
}

// Função de ordenação rápida (QuickSort)
void quickSort(std::vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Índice de particionamento
        quickSort(arr, low, pi - 1);        // Ordena os elementos antes da partição
        quickSort(arr, pi + 1, high);       // Ordena os elementos após a partição
    }
}

int main() {
    std::vector<int> arr = {10, 7, 8, 9, 1, 5};

    std::cout << "Array original: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, arr.size() - 1);

    std::cout << "Array ordenado: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}