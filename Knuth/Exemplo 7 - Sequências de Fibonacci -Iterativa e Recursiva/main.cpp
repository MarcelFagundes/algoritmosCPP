#include <iostream>

// Função recursiva para calcular o n-ésimo número de Fibonacci
unsigned long long fibonacci_recursive(int n) {
    if (n <= 1) return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

// Função iterativa para calcular o n-ésimo número de Fibonacci
unsigned long long fibonacci_iterative(int n) {
    unsigned long long a = 0, b = 1, c;
    if (n == 0) return a;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n = 10;
    std::cout << "Fibonacci recursivo de " << n << ": " << fibonacci_recursive(n) << std::endl;
    std::cout << "Fibonacci iterativo de " << n << ": " << fibonacci_iterative(n) << std::endl;
    return 0;
}