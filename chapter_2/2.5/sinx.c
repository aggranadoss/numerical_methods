#include <stdio.h>
#include <math.h>

void calcularSeno(double x, int n, double *aproximacion, double *error) {
    double valorVerdadero = sin(x);
    *aproximacion = 0.0;
    *error = 0.0;

    for (int i = 0; i <= n; ++i) {
        double exponente = 2 * i + 1; // Exponente de la serie de Taylor
        double termino = pow(x, exponente) / tgamma(exponente + 1); // hallar el término de la serie de Taylor
        *aproximacion += pow(-1, i) * termino; // Acumulación de los términos en la aproximación
        *error = valorVerdadero - *aproximacion; // hallar error
        printf("Aproximacion en paso %d: %.6f\tError: %.6f\n", i, *aproximacion, *error); // Impresión de la aproximación y el error en cada paso
    }
}

int main() {
    double x;
    int n;

    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);
    printf("Ingrese la cantidad de términos (n): ");
    scanf("%d", &n);

    printf("Cálculo del seno de %.1f usando una serie de %d términos\n", x, n);
    printf("Valor verdadero: %.6f\n", sin(x));
    printf("---------------------------------------------\n");

    double aproximacion, error;
    calcularSeno(x, n, &aproximacion, &error); // Llamada a la función para hallar el seno

    printf("---------------------------------------------\n");
    printf("Resultado final: %.6f\n", aproximacion);

    return 0;
}
