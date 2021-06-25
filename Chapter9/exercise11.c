//
// Created by Peixiao on 2021/6/25.
//

#include <stdio.h>

long Fibonacci(long n);

int main() {
    long n;

    printf("Test Fibonacci() function\n");
    printf("Enter an integer n: ");

    while (scanf("%lf", &n) == 1) {
        printf("Fibonacci #%ld = %ld\n", n, Fibonacci(n));

        printf("Enter an integer n: ");
    }

    return 0;
}

long Fibonacci(long n) {
    if (n < 1) {
        printf("Error: n must be a positive integer.\n");
        return -1;
    }

    long fib_n1 = 0, fib_n = 1, fib_n2;

    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }

    for (long i = 3; i <= n; i++) {
        fib_n2 = fib_n1;
        fib_n1 = fib_n;
        fib_n = fib_n1 + fib_n2;
    }

    return fib_n;
}