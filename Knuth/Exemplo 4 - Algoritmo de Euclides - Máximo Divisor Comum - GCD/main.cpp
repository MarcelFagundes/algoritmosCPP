#include <iostream>

// Função para calcular o GCD usando o Algoritmo de Euclides
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 56, b = 98;
    std::cout << "GCD de " << a << " e " << b << " é " << gcd(a, b) << std::endl;
    return 0;
}