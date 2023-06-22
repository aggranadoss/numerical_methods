#include <stdio.h>

#define MAX_LONGITUD_VECTOR 100

// Prototipos de funciones
int calcularFactorial(int n);
int encontrarMinimo(int vector[], int longitud);
float calcularPromedio(int vector[], int longitud);
void leerVector(int vector[], int longitud);

int main() {
    int opcion;
    int longitud;
    int vector[MAX_LONGITUD_VECTOR];
    
    do {
        // Mostrar el menú de opciones
        printf("1. Calcular factorial\n");
        printf("2. Encontrar el valor más pequeño en un vector\n");
        printf("3. Calcular el promedio de los valores de un vector\n");
        printf("4. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1: {
                int numero;
                printf("Ingrese un número entero: ");
                scanf("%d", &numero);
                // hallar el factorial del número ingresado
                int factorial = calcularFactorial(numero);
                printf("El factorial de %d es: %d\n", numero, factorial);
                break;
            }
            case 2: {
                printf("Ingrese la longitud del vector: ");
                scanf("%d", &longitud);
                leerVector(vector, longitud);
                // hallar el valor mínimo en el vector
                int minimo = encontrarMinimo(vector, longitud);
                printf("El valor más pequeño del vector es: %d\n", minimo);
                break;
            }
            case 3: {
                printf("Ingrese la longitud del vector: ");
                scanf("%d", &longitud);
                leerVector(vector, longitud);
                // hallar el promedio de los valores en el vector
                float promedio = calcularPromedio(vector, longitud);
                printf("El promedio de los valores del vector es: %.2f\n", promedio);
                break;
            }
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Por favor, intente nuevamente.\n");
                break;
        }
        
        printf("\n");
        
    } while (opcion != 4);
    
    return 0;
}

// Función para calcular el factorial de un número
int calcularFactorial(int n) {
    int factorial = 1;
    
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    
    return factorial;
}

// Función para encontrar el valor más pequeño en un vector
int encontrarMinimo(int vector[], int longitud) {
    int minimo = vector[0];
    
    for (int i = 1; i < longitud; i++) {
        if (vector[i] < minimo) {
            minimo = vector[i];
        }
    }
    
    return minimo;
}

// Función para calcular el promedio de los valores de un vector
float calcularPromedio(int vector[], int longitud) {
    int suma = 0;
    
    for (int i = 0; i < longitud; i++) {
        suma += vector[i];
    }
    
    float promedio = (float)suma / longitud;
    return promedio;
}

// Función para leer los elementos de un vector
void leerVector(int vector[], int longitud) {
    printf("Ingrese los elementos del vector:\n");
    
    for (int i = 0; i < longitud; i++) {
        scanf("%d", &vector[i]);
    }
}

