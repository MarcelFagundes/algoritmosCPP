#include <iostream>

class LCG {
private:
    unsigned long long a = 1664525;   // Coeficiente multiplicativo
    unsigned long long c = 1013904223; // Incremento
    unsigned long long m = 4294967296; // Módulo (2^32)
    unsigned long long seed;

public:
    LCG(unsigned long long seedVal) : seed(seedVal) {}

    // Função que gera o próximo número aleatório
    unsigned long long next() {
        seed = (a * seed + c) % m;
        return seed;
    }
};

int main() {
    LCG randomGen(12345); // Semente

    for (int i = 0; i < 10; i++) {
        std::cout << randomGen.next() << std::endl;
    }

    return 0;
}