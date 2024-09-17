#include <iostream>

// Función que pasa un parámetro por valor (no afecta la variable original)
void porValor(int num) {
    num = 10;  // Este cambio no afectará a la variable original
}

// Función que pasa un parámetro por referencia (afecta la variable original)
void porReferencia(int &num) {
    num = 10;  // Este cambio sí afectará a la variable original
}

int main() {
    int a = 5, b = 5;

    // Llamada a la función porValor (no cambiará el valor original)
    porValor(a);
    std::cout << "Después de porValor, a = " << a << std::endl;

    // Llamada a la función porReferencia (sí cambiará el valor original)
    porReferencia(b);
    std::cout << "Después de porReferencia, b = " << b << std::endl;

    return 0;
}
