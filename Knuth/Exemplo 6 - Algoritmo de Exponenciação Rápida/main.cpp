#include <iostream>

// Função para cálculo de exponenciação rápida (a^b)
unsigned long long fastExponentiation(unsigned long long a, unsigned long long b) {
    unsigned long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result *= a;
        }
        a *= a;
        b /= 2;
    }
    return result;
}

int main() {
    unsigned long long base = 2;
    unsigned long long exp = 10;
    std::cout << base << "^" << exp << " = " << fastExponentiation(base, exp) << std::endl;
    return 0;
}