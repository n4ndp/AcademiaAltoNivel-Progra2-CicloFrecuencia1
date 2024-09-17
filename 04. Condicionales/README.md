# **Condicionales en C++**

Las estructuras condicionales en C++ permiten que un programa tome decisiones basadas en el valor de una expresión lógica. Dependiendo de si la condición evaluada es verdadera o falsa, se puede ejecutar un bloque de código u otro, lo que le da flexibilidad a los programas. A continuación, se describen los principales tipos de estructuras condicionales y sus usos en C++.

## **1. Estructura `if`**

La estructura `if` es la más básica y común. Evalúa una condición y, si esta es verdadera (`true`), ejecuta el bloque de código correspondiente.

```cpp
if (condición) {
    // Código a ejecutar si la condición es verdadera
}
```

### **Ejemplo**

```cpp
int x = 10;
if (x > 5) {
    std::cout << "x es mayor que 5" << std::endl;
}
```

En este caso, el mensaje se imprimirá porque `x` es mayor que 5.

### **Detalles**
- La condición dentro de los paréntesis debe evaluar a un valor booleano (`true` o `false`).
- Si la condición es falsa, el bloque de código dentro del `if` será ignorado.

## **2. Estructura `if-else`**

La estructura `if-else` proporciona una bifurcación. Si la condición del `if` es verdadera, se ejecuta el primer bloque; de lo contrario, se ejecuta el bloque dentro del `else`.

```cpp
if (condición) {
    // Código a ejecutar si la condición es verdadera
} else {
    // Código a ejecutar si la condición es falsa
}
```

### **Ejemplo**

```cpp
int x = 3;
if (x > 5) {
    std::cout << "x es mayor que 5" << std::endl;
} else {
    std::cout << "x es 5 o menor" << std::endl;
}
```

En este caso, se imprime "x es 5 o menor" porque la condición `x > 5` es falsa.

### **Detalles**
- El bloque `else` es opcional y solo se ejecuta cuando la condición del `if` es falsa.
- Se recomienda usar `else` solo cuando haya un caso alternativo claramente definido.

## **3. Estructura `if-else if-else`**

Esta estructura se utiliza cuando hay múltiples condiciones que necesitan ser evaluadas de manera secuencial. Cada condición se evalúa en orden, y el bloque de código correspondiente se ejecuta cuando se encuentra una condición verdadera.

```cpp
if (condición1) {
    // Código si condición1 es verdadera
} else if (condición2) {
    // Código si condición2 es verdadera
} else {
    // Código si ninguna de las condiciones anteriores es verdadera
}
```

### **Ejemplo**

```cpp
int x = 7;
if (x > 10) {
    std::cout << "x es mayor que 10" << std::endl;
} else if (x > 5) {
    std::cout << "x es mayor que 5 pero menor o igual a 10" << std::endl;
} else {
    std::cout << "x es 5 o menor" << std::endl;
}
```

Aquí se imprime "x es mayor que 5 pero menor o igual a 10" porque `x` cumple con la segunda condición.

### **Detalles**
- El bloque `else` final es opcional, pero proporciona un caso por defecto si ninguna de las condiciones anteriores es verdadera.
- Cuidado con anidar muchos `else if`, ya que puede hacer que el código sea más difícil de leer. En esos casos, podrías considerar otras estructuras, como `switch`.

## **4. Operador Ternario**

El operador ternario (`?:`) es una versión abreviada de la estructura `if-else`, diseñada para situaciones simples. Se utiliza para evaluar una expresión en una sola línea.

```cpp
resultado = (condición) ? valor_si_verdadero : valor_si_falso;
```

### **Ejemplo**

```cpp
int x = 4;
std::string mensaje = (x % 2 == 0) ? "x es par" : "x es impar";
std::cout << mensaje << std::endl;
```

En este caso, el mensaje "x es par" será impreso si `x` es divisible por 2.

### **Detalles**
- El operador ternario es útil para simplificar expresiones pequeñas y claras.
- No se recomienda para decisiones complejas, ya que puede hacer que el código sea menos legible.

## **5. Uso de `switch`**

El `switch` es útil cuando una única variable puede tener varios valores posibles. Evalúa la variable y ejecuta el bloque de código que coincide con el valor de la variable.

```cpp
switch (variable) {
    case valor1:
        // Código si variable == valor1
        break;
    case valor2:
        // Código si variable == valor2
        break;
    // ...
    default:
        // Código si ninguno de los valores coincide
}
```

### **Ejemplo**

```cpp
int dia = 3;
switch (dia) {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miércoles" << std::endl;
        break;
    default:
        std::cout << "Día inválido" << std::endl;
}
```

Este código imprimirá "Miércoles" porque `dia` es igual a 3.

### **Detalles**
- El `break` es importante para evitar que se ejecuten múltiples casos después de una coincidencia.
- El `default` es opcional, pero es una buena práctica incluirlo para manejar valores inesperados.
