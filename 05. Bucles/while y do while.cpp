#include <iostream>

int main() {
    // Ejemplo de bucle while
    int contadorWhile = 0;

    std::cout << "Bucle WHILE:" << std::endl;
    // El bucle 'while' evalúa la condición antes de ejecutar el bloque de código.
    while (contadorWhile < 5) {
        std::cout << "Iteración (while): " << contadorWhile << std::endl;
        contadorWhile++;  // Incrementamos la variable de control
    }

    std::cout << std::endl;

    // Ejemplo de bucle do-while
    int contadorDoWhile = 0;

    std::cout << "Bucle DO-WHILE:" << std::endl;
    // El bucle 'do-while' siempre ejecuta el bloque de código al menos una vez, 
    // ya que evalúa la condición después de ejecutar el bloque.
    do {
        std::cout << "Iteración (do-while): " << contadorDoWhile << std::endl;
        contadorDoWhile++;  // Incrementamos la variable de control
    } while (contadorDoWhile < 5);

    std::cout << std::endl;

    // Ejemplo donde la condición es falsa desde el principio
    std::cout << "Comparación cuando la condición es falsa desde el inicio:" << std::endl;

    // Condición falsa desde el principio para el bucle while
    int falsoWhile = 10;
    std::cout << "Bucle WHILE con condición falsa:" << std::endl;
    while (falsoWhile < 5) {
        std::cout << "Esto nunca se imprimirá (while)." << std::endl;
    }

    // Condición falsa desde el principio para el bucle do-while
    int falsoDoWhile = 10;
    std::cout << "Bucle DO-WHILE con condición falsa:" << std::endl;
    do {
        std::cout << "Esto se imprimirá al menos una vez (do-while)." << std::endl;
    } while (falsoDoWhile < 5);

    return 0;
}
