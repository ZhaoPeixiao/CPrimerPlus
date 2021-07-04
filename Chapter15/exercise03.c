//
// Created by Peixiao on 2021/7/4.
//

#include <stdio.h>

#define CLEARINPUT while (getchar() != '\n') continue

int onbits(int n);

int main(void) {
    int n, bits;

    printf("Enter an integer (non-integer to quit): ");
    while ((scanf("%d", &n) == 1)) {
        CLEARINPUT;
        bits = onbits(n);
        printf("There are %d on bits in %d\n", bits, n);

        printf("Enter an integer (non-integer to quit): ");
    }
    return 0;
}

int onbits(int n) {
    int count = 0;
    while (n != 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1;
    }
    return count;
}