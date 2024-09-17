#include <iostream>

int main() {
    // Definimos un arreglo de 5 elementos
    int arr[5] = {10, 20, 30, 40, 50};

    // Declaramos un puntero que apunta al primer elemento del arreglo
    int *ptr = arr;

    // Mostramos la dirección de memoria del primer elemento
    std::cout << "Dirección del primer elemento: " << ptr << std::endl;

    // Aritmética de punteros para acceder a los elementos del arreglo
    std::cout << "Valor del primer elemento: " << *ptr << std::endl;
    std::cout << "Valor del segundo elemento (ptr + 1): " << *(ptr + 1) << std::endl;
    std::cout << "Valor del tercer elemento (ptr + 2): " << *(ptr + 2) << std::endl;

    // Incrementar el puntero para apuntar al siguiente elemento del arreglo
    ptr++;  // Ahora el puntero apunta al segundo elemento
    std::cout << "\nDespués de ptr++, el puntero apunta a: " << ptr << std::endl;
    std::cout << "Valor en la nueva dirección: " << *ptr << std::endl;

    // Restar una posición al puntero (volver al primer elemento)
    ptr--;  // Volvemos a apuntar al primer elemento
    std::cout << "\nDespués de ptr--, el puntero vuelve a: " << ptr << std::endl;
    std::cout << "Valor en la dirección original: " << *ptr << std::endl;

    // Aritmética de punteros con bucle para recorrer el arreglo
    std::cout << "\nRecorriendo el arreglo con aritmética de punteros:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Elemento " << i << ": " << *(arr + i) << std::endl;
    }

    return 0;
}
