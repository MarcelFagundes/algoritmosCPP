#include <iostream>

// Função recursiva para calcular o fatorial de um número
unsigned long long factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int n = 20;
    std::cout << "Fatorial de " << n << " é " << factorial(n) << std::endl;
    return 0;
}