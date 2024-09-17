#include <iostream>

int main() {
    // Declaramos un número entero
    int codigoAscii;

    // Pedimos al usuario que ingrese un número entre 0 y 127
    std::cout << "Ingresa un número entre 0 y 127: ";
    std::cin >> codigoAscii;

    // Convertimos el número a un carácter usando su código ASCII
    char caracter = static_cast<char>(codigoAscii);

    // Mostramos el carácter correspondiente al código ASCII
    std::cout << "El carácter correspondiente al código ASCII " << codigoAscii << " es: " << caracter << std::endl;

    return 0;
}
