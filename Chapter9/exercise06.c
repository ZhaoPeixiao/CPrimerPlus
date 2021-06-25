//
// Created by Peixiao on 2021/6/25.
//

#include <stdio.h>

void sort_variables(double *x, double *y, double *z);

int main() {
    double x, y, z;

    printf("Test sort_variables():\n");
    printf("Enter three numbers x, y and z:\n");
    while (scanf("%lf %lf %lf", &x, &y, &z) == 3) {
        putchar('\n');
        printf("Before calling sort_variables:\n");
        printf("x = %f, y = %f, z = %f\n", x, y, z);

        sort_variables(&x, &y, &z);

        putchar('\n');
        printf("After calling sort_variables:\n");
        printf("x = %f, y = %f, z = %f\n", x, y, z);

        putchar('\n');

        printf("Enter three numbers x, y and z:\n");
    }

    return 0;
}

void sort_variables(double *x, double *y, double *z) {
    double tmp;

    if (*x > *y) {
        tmp = *y;
        *y = *x;
        *x = tmp;
    }

    if (*y > *z) {
        tmp = *z;
        *z = *y;
        *y = tmp;

        if (*x > *y) {
            tmp = *y;
            *y = *x;
            *x = tmp;
        }
    }
}