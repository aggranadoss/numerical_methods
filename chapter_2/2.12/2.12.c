#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void metodo_burbuja(int *arr, int n);

int main() {
    int n = 10; // Tamaño del arreglo
    int arr[n];
    
    //arreglo
    srand(time(NULL)); // Semilla para el generador de números aleatorios
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100; // Generar un número aleatorio entre 0 y 99
    }
    
    // arreglo sin ordenar
    printf("Arreglo antes de ordenar:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // método de la burbuja
    metodo_burbuja(arr, n);
    
    // arreglo ordenado
    printf("Arreglo ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

void metodo_burbuja(int *arr, int n) {
    int temp;
    int i = 0;
    int j = 0;
    int intercambio = 0;
    
    do {
        intercambio = 0;
        i = 0;
        while (i < n-1) {
            if (arr[i] > arr[i+1]) {
                // Intercambio
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                intercambio = 1;
            }
            i++;
        }
        n--;
    } while (intercambio);
}

