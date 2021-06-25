//
// Created by Peixiao on 2021/6/25.
//

#include <stdlib.h>
#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base, output;
    int exponent;

    printf("Test power() function:\n");
    printf("Enter a :double: base and :int: exponent: ");

    while (scanf("%lf %d", &base, &exponent) == 2) {
        output = power(base, exponent);

        printf("%f ^ %d = %f \n", base, exponent, output);

        printf("Enter a :double: base and :int: exponent: ");
    }

    return 0;
}

double power(double base, int exponent) {
    double dbl_power;

    if (base == 0) {
        if (exponent == 0) {
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
            return 1.0;
        } else {
            return 0;
        }
    }

    if (exponent == 0) {
        return 1;
    }

    dbl_power = base * power(base, abs(exponent) - 1);

    if (exponent < 0) {
        dbl_power = 1 / dbl_power;
    }

    return dbl_power;
}