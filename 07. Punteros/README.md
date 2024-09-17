# **Punteros en C++**

Los **punteros** son una característica poderosa en C++ que permiten almacenar la dirección de memoria de otra variable. Con los punteros, se puede acceder y manipular datos directamente en la memoria, lo que ofrece mayor flexibilidad y control sobre el manejo de datos, pero también conlleva ciertos riesgos si no se utilizan correctamente.

En este README, veremos los conceptos clave sobre punteros, cómo se declaran y utilizan, y cómo trabajar con ellos en situaciones como punteros a arreglos, funciones, y memoria dinámica.

## **1. ¿Qué es un Puntero?**

Un **puntero** es una variable que almacena la **dirección de memoria** de otra variable. El puntero no contiene directamente el valor de la variable, sino la dirección donde ese valor se encuentra en la memoria.

### **Declaración de un Puntero**

```cpp
tipo_dato *nombre_puntero;
```

- `tipo_dato`: Es el tipo de dato de la variable a la que el puntero apunta.
- `*nombre_puntero`: El asterisco (`*`) indica que la variable es un puntero.

### **Ejemplo**

```cpp
int var = 10;     // Variable entera
int *ptr = &var;  // Puntero que almacena la dirección de var
```

En este ejemplo, `ptr` es un puntero que almacena la dirección de la variable `var`. Usamos el operador `&` para obtener la dirección de `var`.

## **2. Operadores `*` y `&`**

- **`&` (Operador de Dirección)**: Este operador obtiene la dirección de una variable.
  ```cpp
  int x = 5;
  int *ptr = &x;  // ptr almacena la dirección de 'x'
  ```

- **`*` (Operador de Desreferencia)**: Este operador obtiene el valor almacenado en la dirección de memoria a la que apunta el puntero.
  ```cpp
  int y = *ptr;  // y obtiene el valor que almacena 'x' a través del puntero
  ```

### **Ejemplo Completo**

```cpp
#include <iostream>

int main() {
    int var = 10;
    int *ptr = &var;  // Almacenamos la dirección de 'var'

    std::cout << "Valor de var: " << var << std::endl;
    std::cout << "Dirección de var: " << &var << std::endl;
    std::cout << "Valor almacenado en ptr (dirección de var): " << ptr << std::endl;
    std::cout << "Valor apuntado por ptr (valor de var): " << *ptr << std::endl;

    return 0;
}
```

## **3. Punteros y Arreglos**

En C++, los nombres de arreglos son en sí mismos punteros al primer elemento del arreglo. Esto significa que puedes manipular los arreglos usando punteros.

### **Ejemplo de Punteros y Arreglos**

```cpp
#include <iostream>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;  // Puntero que apunta al primer elemento del arreglo

    for (int i = 0; i < 3; i++) {
        std::cout << "Elemento " << i << ": " << *(ptr + i) << std::endl;
    }

    return 0;
}
```

### **Explicación**
- `ptr` apunta al primer elemento del arreglo `arr`.
- `*(ptr + i)` accede al valor del arreglo desplazándose `i` posiciones desde el primer elemento.

## **4. Punteros y Funciones**

Los punteros pueden ser pasados a funciones, lo que permite modificar directamente el valor de las variables originales (similar al paso por referencia).

### **Ejemplo de Función con Punteros**

```cpp
#include <iostream>

// Función que modifica el valor original usando un puntero
void cambiarValor(int *ptr) {
    *ptr = 100;  // Modifica el valor apuntado por el puntero
}

int main() {
    int var = 20;
    std::cout << "Antes de la función: " << var << std::endl;

    cambiarValor(&var);  // Pasamos la dirección de 'var'

    std::cout << "Después de la función: " << var << std::endl;
    return 0;
}
```

### **Explicación**
- La función `cambiarValor` toma un puntero `int` como parámetro y modifica el valor al que apunta.
- Al pasar la dirección de `var`, estamos permitiendo que la función modifique su valor original.

## **5. Punteros y Memoria Dinámica**

Los punteros son esenciales para trabajar con **memoria dinámica**, que es asignada en tiempo de ejecución usando los operadores `new` y `delete`.

### **Asignación Dinámica de Memoria**

```cpp
#include <iostream>

int main() {
    // Asignamos memoria dinámica para un entero
    int *ptr = new int;
    *ptr = 50;  // Asignamos un valor a la memoria asignada

    std::cout << "Valor almacenado en la memoria dinámica: " << *ptr << std::endl;

    delete ptr;  // Liberamos la memoria dinámica asignada

    return 0;
}
```

### **Explicación**
- `new int` asigna memoria dinámica para un entero y devuelve un puntero a esa memoria.
- `delete ptr` libera la memoria asignada una vez que ya no se necesita.

### **Memoria Dinámica para Arreglos**

```cpp
#include <iostream>

int main() {
    // Asignamos memoria dinámica para un arreglo de 5 enteros
    int *arr = new int[5];

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;  // Asignamos valores al arreglo dinámico
    }

    for (int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    delete[] arr;  // Liberamos la memoria del arreglo

    return 0;
}
```

## **6. Puntero Nulo (`nullptr`)**

El puntero `nullptr` es un puntero que no apunta a ninguna dirección de memoria válida. Es una buena práctica inicializar los punteros con `nullptr` cuando no se tiene una dirección de memoria válida.

### **Ejemplo**

```cpp
#include <iostream>

int main() {
    int *ptr = nullptr;  // Inicializamos el puntero a nullptr

    if (ptr == nullptr) {
        std::cout << "El puntero no apunta a nada." << std::endl;
    }

    return 0;
}
```

### **Importancia del Puntero Nulo**
Siempre verifica si un puntero es `nullptr` antes de intentar desreferenciarlo, ya que de lo contrario puede causar un **segmentation fault** (error de segmentación).
