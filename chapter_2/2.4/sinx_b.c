#include <stdio.h>
#include <math.h>

int main() {
    double a, e, f, x, err;
    int n, dc;

    while (1) {
        printf("\n\n Approximation of the function of sin(x) for n terms with relative approximation error. \n\n");

        printf("\n\n Insert an x value into the reals field to find \"sin(x)\"  = ");
        scanf("%lf", &x);

        printf("\n\n Insert a value n in the field of natural or positive integers to determine the approximation of \"sin(x)\" = ");
        scanf("%d", &n);

        a = 0;
        double fact = 1;
        for (int i = 0; i <= n; i++) {
            f = (pow(-1, i) * pow(x, 2 * i + 1)) / fact;
            a += f;
            fact *= (2 * i + 2) * (2 * i + 3);
        }

        err = fabs((sin(x) - a) / sin(x)) * 100;

        if (err >= 0) {
            printf("\n\n The approximation for %d terms of sin(%.2lf) is: \n\n sin(%.2lf)= %lf + (%lf) \n\n with an excess relative error of %lf \n\n", n, x, x, a, err, err);
        }
        else if (err < 0) {
            printf("\n\n The approximation for %d terms of sin(%.2lf) is: \n\n sin(%.2lf)= %lf + (%lf) \n\n with an default relative error of %lf \n\n", n, x, x, a, err, err);
        }

        printf("\n\n MENU - 1 or EXIT - 0 \n Value = ");
        scanf("%d", &dc);
        if (dc == 0) {
            break;
        }
    }

    return 0;
}

