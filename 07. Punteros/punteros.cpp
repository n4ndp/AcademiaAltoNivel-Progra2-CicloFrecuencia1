#include <iostream>

using namespace std;

int main() {
    // Declaramos una variable entera y un puntero que apunta a ella
    int var1 = 10;
    int *ptr1 = &var1;  // ptr1 apunta a la dirección de var1

    // Imprimimos el valor de la variable y su dirección de memoria
    cout << "Valor de var1: " << var1 << endl;
    cout << "Direccion de var1 (&var1): " << &var1 << endl;
    
    // Imprimimos la dirección almacenada en ptr1 (que es la dirección de var1) 
    // y el valor al que apunta ptr1 (el valor de var1)
    cout << "Direccion almacenada en ptr1: " << ptr1 << endl;
    cout << "Valor al que apunta ptr1 (*ptr1): " << *ptr1 << endl;

    // Ejemplo de puntero nulo
    int *ptr2 = nullptr;  // ptr2 es un puntero nulo, no apunta a ninguna dirección válida

    // Verificamos si el puntero es nulo antes de intentar usarlo
    if (ptr2 == nullptr) {
        cout << "El puntero ptr2 es nulo y no apunta a ninguna direccion valida." << endl;
    }

    // Ejemplo de un puntero no inicializado (puntero salvaje)
    int *ptr3;  // ptr3 es un puntero salvaje, no ha sido inicializado

    // Esta operación sería peligrosa porque ptr3 no apunta a ninguna dirección válida
    // y podría acceder a una dirección de memoria desconocida.
    // cout << *ptr3 << endl;  // Esto causaría un comportamiento indefinido y es peligroso.

    // Es buena práctica inicializar punteros si no están apuntando a ninguna dirección
    ptr3 = nullptr;  // Siempre es mejor inicializar punteros a nullptr si no se usan.

    // Ejemplo de un puntero constante: un puntero que no puede cambiar de dirección
    int var2 = 10;
    int *const ptr4 = &var2;  // ptr4 es un puntero constante, siempre apuntará a var2

    // No podemos cambiar la dirección a la que apunta ptr4
    // Si intentamos hacerlo, obtendremos un error de compilación
    // int otroVar = 20;
    // ptr4 = &otroVar;  // Esto causará un error de compilación porque ptr4 es constante

    // Sin embargo, podemos cambiar el valor de la variable a la que apunta ptr4
    *ptr4 = 20;  // Cambiamos el valor de var2 a través del puntero
    cout << "Nuevo valor de var2: " << var2 << endl;

    return 0;
}
