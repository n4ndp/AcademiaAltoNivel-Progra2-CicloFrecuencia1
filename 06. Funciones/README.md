# **Funciones en C++**

Las funciones en C++ son bloques de código reutilizables que realizan una tarea específica. Definir funciones permite estructurar y organizar mejor un programa, promoviendo la modularidad y el reuso del código. En este README, aprenderemos cómo declarar, definir y utilizar funciones en C++, además de explorar conceptos avanzados como paso de parámetros y sobrecarga de funciones.

## **1. Estructura Básica de una Función**

En C++, una función consta de cuatro partes principales:

1. **Tipo de retorno**: El tipo de dato que la función devuelve (por ejemplo, `int`, `double`, `void` si no devuelve nada).
2. **Nombre de la función**: Identificador único de la función.
3. **Parámetros (opcional)**: Valores que se pasan a la función para que los procese.
4. **Cuerpo de la función**: Bloque de código que realiza la tarea.

### **Sintaxis básica de una función**

```cpp
tipo_de_retorno nombre_funcion(tipo_parametro parametro1, tipo_parametro parametro2) {
    // Código que realiza una tarea
    return valor;  // Devuelve un valor del mismo tipo que tipo_de_retorno
}
```

### **Ejemplo de una función que suma dos enteros**

```cpp
#include <iostream>

// Declaración de la función
int sumar(int a, int b) {
    return a + b;  // Retorna la suma de los dos parámetros
}

int main() {
    int resultado = sumar(5, 3);  // Llamada a la función
    std::cout << "La suma es: " << resultado << std::endl;
    return 0;
}
```

En este ejemplo, la función `sumar` toma dos parámetros enteros, los suma y devuelve el resultado.

## **2. Parámetros y Argumentos**

### **Parámetros por Valor**
Cuando se pasan parámetros por valor, se pasa una copia de los valores originales. Modificar los parámetros dentro de la función no afecta a las variables originales fuera de la función.

```cpp
void duplicar(int num) {
    num = num * 2;  // Esto no afecta al valor original
}
```

### **Parámetros por Referencia**
Si se quiere modificar el valor original de las variables pasadas, se utilizan referencias (`&`), lo que permite a la función trabajar directamente con las variables originales.

```cpp
void duplicar(int &num) {
    num = num * 2;  // Esto modifica el valor original
}
```

### **Ejemplo completo de parámetros por valor y por referencia**

```cpp
#include <iostream>

void incrementarPorValor(int a) {
    a = a + 1;
    std::cout << "Dentro de la función (por valor): " << a << std::endl;
}

void incrementarPorReferencia(int &a) {
    a = a + 1;
    std::cout << "Dentro de la función (por referencia): " << a << std::endl;
}

int main() {
    int numero = 5;

    incrementarPorValor(numero);  // Pasa por valor (no modifica el original)
    std::cout << "Después de la llamada (por valor): " << numero << std::endl;

    incrementarPorReferencia(numero);  // Pasa por referencia (modifica el original)
    std::cout << "Después de la llamada (por referencia): " << numero << std::endl;

    return 0;
}
```

## **3. Funciones con Retorno `void`**

Las funciones también pueden no devolver ningún valor, en cuyo caso el tipo de retorno es `void`. Este tipo de funciones simplemente ejecutan tareas sin devolver un resultado.

### **Ejemplo**

```cpp
#include <iostream>

void imprimirMensaje() {
    std::cout << "Este es un mensaje de ejemplo." << std::endl;
}

int main() {
    imprimirMensaje();  // Llamada a la función
    return 0;
}
```

En este ejemplo, la función `imprimirMensaje` no devuelve ningún valor, solo ejecuta la acción de imprimir texto en la consola.

## **4. Sobrecarga de Funciones**

En C++, es posible definir varias funciones con el mismo nombre, siempre que tengan un número o tipo de parámetros diferentes. Esto se llama **sobrecarga de funciones** y permite usar el mismo nombre para funciones que realizan tareas similares con diferentes tipos de datos.

### **Ejemplo de Sobrecarga de Funciones**

```cpp
#include <iostream>

// Sobrecarga de la función 'sumar'
int sumar(int a, int b) {
    return a + b;
}

double sumar(double a, double b) {
    return a + b;
}

int main() {
    int resultadoEntero = sumar(3, 4);  // Llamada a la versión que suma enteros
    double resultadoDecimal = sumar(2.5, 3.7);  // Llamada a la versión que suma doubles

    std::cout << "Suma de enteros: " << resultadoEntero << std::endl;
    std::cout << "Suma de decimales: " << resultadoDecimal << std::endl;

    return 0;
}
```

En este ejemplo, la función `sumar` tiene dos versiones: una que suma enteros y otra que suma números de punto flotante (`double`).

## **5. Funciones Recursivas**

Una función recursiva es aquella que se llama a sí misma para resolver un problema más pequeño o reducir su complejidad. Es útil en problemas que pueden dividirse en subproblemas más simples (como en algoritmos de búsqueda y ordenación).

### **Ejemplo de una Función Recursiva: Factorial**

```cpp
#include <iostream>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Caso base
    } else {
        return n * factorial(n - 1);  // Llamada recursiva
    }
}

int main() {
    int num = 5;
    std::cout << "El factorial de " << num << " es: " << factorial(num) << std::endl;
    return 0;
}
```

En este ejemplo, la función `factorial` se llama a sí misma hasta que llega al caso base, `n == 0` o `n == 1`.
