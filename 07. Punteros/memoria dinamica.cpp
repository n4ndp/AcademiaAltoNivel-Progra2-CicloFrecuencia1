#include <iostream>

using namespace std;

int main() {
    // Asignación dinámica de memoria para una variable entera
    int *ptr = new int;  // Asignamos memoria para un entero
    *ptr = 100;          // Asignamos el valor 100 a la memoria asignada

    // Mostramos el valor almacenado en la memoria dinámica
    cout << "Valor almacenado en la memoria dinámica: " << *ptr << endl;
    cout << "Direccion de memoria donde está almacenado el valor: " << ptr << endl;

    // Es importante liberar la memoria cuando ya no se necesita para evitar fugas de memoria
    delete ptr;  // Liberamos la memoria dinámica asignada

    // Asignación dinámica de memoria para un arreglo de enteros
    int tamano;
    cout << "\nIngrese el tamaño del arreglo: ";
    cin >> tamano;

    // Asignamos memoria dinámica para un arreglo de enteros
    int *arr = new int[tamano];  // Creamos un arreglo de tamaño 'tamano'

    // Llenamos el arreglo con valores y mostramos cada valor
    for (int i = 0; i < tamano; i++) {
        arr[i] = i * 10;  // Asignamos valores multiplicados por 10
    }

    // Mostramos los valores almacenados en el arreglo
    cout << "\nValores almacenados en el arreglo dinámico: " << endl;
    for (int i = 0; i < tamano; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Liberamos la memoria asignada al arreglo dinámico
    delete[] arr;  // Usamos 'delete[]' para liberar memoria de un arreglo dinámico

    // Asignación dinámica para un arreglo bidimensional (matriz)
    int filas, columnas;
    cout << "\nIngrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;

    // Creamos un arreglo de punteros para las filas
    int **matriz = new int *[filas];

    // Asignamos memoria dinámica para cada columna en cada fila
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];  // Cada fila es un arreglo dinámico de columnas
    }

    // Llenamos la matriz con valores
    cout << "\nLlenando la matriz dinámica..." << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = (i + 1) * (j + 1);  // Asignamos valores de ejemplo
        }
    }

    // Mostramos la matriz dinámica
    cout << "\nValores de la matriz dinámica: " << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";  // Mostramos cada valor
        }
        cout << endl;
    }

    // Liberamos la memoria de cada fila (columnas)
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];  // Liberamos cada fila
    }

    // Finalmente, liberamos la memoria del arreglo de punteros (filas)
    delete[] matriz;

    return 0;
}
