#include <iostream>
#include <vector>

// Função para transformar o subárvore com raiz em i em um heap
void heapify(std::vector<int>& arr, int n, int i) {
    int largest = i;  // Inicializa o maior como raiz
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Verifica se o filho da esquerda é maior que a raiz
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Verifica se o filho da direita é maior que o maior até agora
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Se o maior não é a raiz
    if (largest != i) {
        std::swap(arr[i], arr[largest]);

        // Recursivamente transforma o subárvore afetado em heap
        heapify(arr, n, largest);
    }
}

// Função principal de ordenação por heap
void heapSort(std::vector<int>& arr) {
    int n = arr.size();

    // Constrói o heap (rearranja o array)
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Um por um extrai um elemento do heap
    for (int i = n - 1; i > 0; i--) {
        std::swap(arr[0], arr[i]); // Move a raiz atual para o final

        // Chama heapify no heap reduzido
        heapify(arr, i, 0);
    }
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Array original: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    heapSort(arr);

    std::cout << "Array ordenado: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}