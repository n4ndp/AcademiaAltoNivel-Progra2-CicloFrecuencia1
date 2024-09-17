#include <iostream>

int main() {
    // Ejemplo de incremento y decremento en modo prefijo y sufijo

    // Incremento
    int a = 5;
    int b;

    // Incremento prefijo (++a): primero incrementa, luego usa el valor
    b = ++a;  // 'a' se incrementa a 6, y luego se asigna a 'b'
    std::cout << "Después de ++a, a = " << a << " y b = " << b << std::endl;

    // Resetear valor de a
    a = 5;

    // Incremento sufijo (a++): primero usa el valor, luego incrementa
    b = a++;  // 'a' se asigna a 'b' (aún vale 5), y luego 'a' se incrementa a 6
    std::cout << "Después de a++, a = " << a << " y b = " << b << std::endl;

    std::cout << std::endl;

    // Decremento
    int c = 10;
    int d;

    // Decremento prefijo (--c): primero decrementa, luego usa el valor
    d = --c;  // 'c' se decrementa a 9, y luego se asigna a 'd'
    std::cout << "Después de --c, c = " << c << " y d = " << d << std::endl;

    // Resetear valor de c
    c = 10;

    // Decremento sufijo (c--): primero usa el valor, luego decrementa
    d = c--;  // 'c' se asigna a 'd' (aún vale 10), y luego 'c' se decrementa a 9
    std::cout << "Después de c--, c = " << c << " y d = " << d << std::endl;

    return 0;
}
