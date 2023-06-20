#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Ingrese los coeficientes de la ecuación cuadrática (ax^2 + bx + c):\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Las raíces son reales y diferentes: %.2f y %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Las raíces son reales e iguales: %.2f y %.2f\n", root1, root2);
    } else {
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Las raíces son complejas y conjugadas: %.2f + %.2fi y %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
