#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    // Suma
    int suma = a + b;
    std::cout << "Suma (" << a << " + " << b << "): " << suma << std::endl;

    // Resta
    int resta = a - b;
    std::cout << "Resta (" << a << " - " << b << "): " << resta << std::endl;

    // Multiplicación
    int multiplicacion = a * b;
    std::cout << "Multiplicación (" << a << " * " << b << "): " << multiplicacion << std::endl;

    // División entera
    int division = a / b;
    std::cout << "División entera (" << a << " / " << b << "): " << division << std::endl;

    // División con punto flotante
    double division_float = static_cast<double>(a) / b; // - Se convierte a double para que el resultado
                                                        //   sea con punto flotante (decimal), si no, el
                                                        //   resultado sería 3 en lugar de 3.33333.
                                                        // - Esto se llama "casting", es necesario para que
                                                        //   el compilador sepa que queremos un resultado con
                                                        //   punto flotante.
                                                        // - En la división, si uno de los operandos es un número
                                                        //   con punto flotante, el resultado será con punto flotante.

    std::cout << "División con punto flotante (" << a << " / " << b << "): " << division_float << std::endl;

    // Módulo (resto de la división)
    int modulo = a % b;
    std::cout << "Módulo (" << a << " % " << b << "): " << modulo << std::endl;

    return 0;
}
