#include <iostream>

// Sobrecarga de la función 'multiplicar' para enteros
int multiplicar(int a, int b) {
    return a * b;
}

// Sobrecarga de la función 'multiplicar' para números de punto flotante (double)
double multiplicar(double a, double b) {
    return a * b;
}

int main() {
    int x = 3, y = 4;
    double p = 2.5, q = 3.5;

    // Llamada a la versión de la función que multiplica enteros
    std::cout << "Multiplicación de enteros: " << multiplicar(x, y) << std::endl;

    // Llamada a la versión de la función que multiplica doubles
    std::cout << "Multiplicación de doubles: " << multiplicar(p, q) << std::endl;

    return 0;
}
