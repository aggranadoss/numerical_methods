#include <stdio.h>

// Función para determinar si un año es bisiesto o no
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;  // Es un año bisiesto
    }
    return 0;  // No es un año bisiesto
}

// Función para calcular los días transcurridos en un año hasta una fecha específica
int days(int mo, int da, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = da;

    // Sumar los días de los meses anteriores
    for (int i = 0; i < mo - 1; i++) {
        totalDays += daysInMonth[i];
    }

    // Añadir un día extra para el 29 de febrero en años bisiestos
    if (mo > 2 && isLeapYear(year)) {
        totalDays++;
    }

    return totalDays;
}

int main() {
    int month, day, year;

    // Solicitar al usuario que ingrese el mes, el día y el año
    printf("Ingrese el mes (1-12): ");
    scanf("%d", &month);
    printf("Ingrese el día (1-31): ");
    scanf("%d", &day);
    printf("Ingrese el año: ");
    scanf("%d", &year);

    // Calcular los días transcurridos en el año hasta la fecha especificada
    int numDays = days(month, day, year);

    // Imprimir el resultado
    printf("Días transcurridos en el año: %d\n", numDays);

    return 0;
}
