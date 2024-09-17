# **Tipos de Datos en C++**

En programación, los **tipos de datos** definen qué tipo de valor puede almacenar una variable y cómo se puede manipular ese valor. C++ es un lenguaje tipado estáticamente, lo que significa que cada variable debe ser declarada con un tipo de dato específico antes de que pueda ser utilizada. Esto permite al compilador garantizar que las operaciones realizadas sobre los datos son válidas.

## **1. Tipos de Datos Primitivos**

Los tipos de datos primitivos son los más básicos y fundamentales. C++ incluye varios tipos de datos primitivos que cubren números, caracteres, y valores booleanos.

### **a. Enteros (`int`)**
El tipo `int` se utiliza para almacenar números enteros, tanto positivos como negativos.
- Tamaño: Usualmente 4 bytes (puede variar según la implementación).
- Rango: Generalmente de -2,147,483,648 a 2,147,483,647.

Ejemplo:
```cpp
int edad = 25;
```

### **b. Números de punto flotante (`float`, `double`)**
Se utilizan para representar números con decimales. Los dos tipos más comunes son:
- `float`: Aproximadamente 7 dígitos de precisión.
- `double`: Aproximadamente 15 dígitos de precisión.

Ejemplo:
```cpp
float altura = 1.75f;
double distancia = 123.456789;
```

### **c. Caracteres (`char`)**
Este tipo de dato almacena un único carácter (letras, dígitos o símbolos).
- Tamaño: 1 byte.
- Rango: 0 a 255 (valores ASCII).

Ejemplo:
```cpp
char inicial = 'A';
```

### **d. Booleanos (`bool`)**
El tipo `bool` representa valores booleanos: `true` (verdadero) o `false` (falso).
- Tamaño: 1 byte.
- Valores posibles: `true` o `false`.

Ejemplo:
```cpp
bool esMayorDeEdad = true;
```

## **2. Tipos de Datos Derivados**

Los tipos de datos derivados se construyen a partir de los tipos primitivos y permiten manejar conjuntos de datos o estructuras más complejas.

### **a. Arreglos**
Un arreglo es una colección de elementos del mismo tipo de dato, almacenados en posiciones contiguas de la memoria.
- Sintaxis: Se define especificando el tipo de dato seguido del nombre del arreglo y su tamaño.

Ejemplo:
```cpp
int numeros[5] = {1, 2, 3, 4, 5};
```

En este caso, `numeros` es un arreglo de enteros que contiene cinco valores.

### **b. Estructuras (`struct`)**
Las estructuras permiten agrupar diferentes tipos de datos bajo un mismo nombre, facilitando la organización y el manejo de datos complejos.
- Las estructuras pueden contener tipos de datos primitivos y otros derivados.

Ejemplo:
```cpp
struct Persona {
    string nombre;
    int edad;
    float altura;
};
```

Aquí, `Persona` es una estructura que agrupa el nombre, la edad y la altura de una persona.

### **c. Enumeraciones (`enum`)**
Una enumeración es un tipo de dato que define un conjunto de constantes con nombre. Es útil para representar estados o valores conocidos de antemano.

Ejemplo:
```cpp
enum DiaDeLaSemana {Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo};
```

En este caso, `DiaDeLaSemana` es un conjunto de constantes que representan los días de la semana.

## **3. Modificadores de Tipos de Datos**

Los modificadores se usan para alterar el tamaño o el rango de los tipos de datos básicos. Los modificadores comunes en C++ son:
- `signed`: Especifica que el tipo de dato puede almacenar tanto valores negativos como positivos (esto es el predeterminado para enteros).
- `unsigned`: Solo permite almacenar valores positivos y amplía el rango.
- `short` y `long`: Modifican el tamaño de la variable, aumentando o reduciendo su capacidad de almacenamiento.

Ejemplo de `unsigned int`:
```cpp
unsigned int edad = 30;  // Solo números positivos, con un rango mayor.
```

## **4. Clases y Objetos (Tipos Definidos por el Usuario)**

Aunque los tipos de datos primitivos y derivados son fundamentales, en la programación orientada a objetos (POO), puedes definir tus propios tipos de datos complejos mediante **clases**. Una clase es un molde que describe un conjunto de objetos con propiedades (atributos) y comportamientos (métodos).

Ejemplo básico de una clase:
```cpp
class Vehiculo {
public:
    string marca;
    int anio;

    void acelerar() {
        cout << "El vehículo está acelerando" << endl;
    }
};
```

## **5. Cadenas de Caracteres (`string`)**

En C++, las cadenas de caracteres se pueden manejar de dos maneras:
1. **Arreglo de caracteres**: Una secuencia de caracteres terminada con un carácter nulo `\0`.
   ```cpp
   char nombre[] = "Juan";
   ```
2. **`std::string`**: Una clase de la biblioteca estándar que simplifica el manejo de cadenas.
   ```cpp
   string nombre = "Juan";
   ```

## **6. Punteros y Referencias**

Un **puntero** es una variable que almacena la dirección de memoria de otra variable. Los punteros son útiles para manipular directamente los datos en memoria y son una característica clave de C++.
- **Sintaxis de punteros**:
   ```cpp
   int* puntero;
   int valor = 10;
   puntero = &valor;  // Asignamos la dirección de 'valor' al puntero
   ```

Una **referencia** es otra forma de acceder a una variable. A diferencia de los punteros, las referencias deben inicializarse al declararse y no pueden cambiar para apuntar a otra variable.
   ```cpp
   int& ref = valor;  // ref es una referencia a 'valor'
   ```
