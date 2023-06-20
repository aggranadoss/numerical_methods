#include <stdio.h>
#include <math.h>

void solveReal(double a, double b, double discriminante);
void solveComplex(double a, double b, double discriminante);

int main()
{
    double a, b, c;

    printf("Ingrese los coeficientes a, b y c de la ecuación cuadrática:\n");
    printf("a = ");
    scanf("%lf", &a);  // Usa %lf para leer un double
    printf("b = ");
    scanf("%lf", &b);  // Usa %lf para leer un double
    printf("c = ");
    scanf("%lf", &c);  // Usa %lf para leer un double

    // Calcula el discriminante
    double discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        // Raíces reales y distintas
        solveReal(a, b, discriminante);
    } else if (discriminante == 0) {
        // Raíces reales e iguales
        double x = -b / (2 * a);
        printf("La ecuación tiene una raíz real: %.2lf\n", x);
    } else {
        // Raíces complejas conjugadas
        solveComplex(a, b, discriminante);
    }

    return 0;
}

void solveReal(double a, double b, double discriminante)
{
    double x1 = (-b + sqrt(discriminante)) / (2 * a);
    double x2 = (-b - sqrt(discriminante)) / (2 * a);
    printf("La ecuación tiene dos raíces reales y distintas: %.2lf y %.2lf\n", x1, x2);
}

void solveComplex(double a, double b, double discriminante)
{
    double realPart = -b / (2 * a);
    double imagPart = sqrt(-discriminante) / (2 * a);
    printf("La ecuación tiene dos raíces complejas conjugadas: %.2lf + %.2lfi y %.2lf - %.2lfi\n",
           realPart, imagPart, realPart, imagPart);
}

