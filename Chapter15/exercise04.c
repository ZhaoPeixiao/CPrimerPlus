//
// Created by Peixiao on 2021/7/4.
//

#include <stdio.h>
#include <limits.h>

#define CLEARINPUT while (getchar() != '\n') continue

int checkbit(int value, int position);

int main(void) {
    int value, position, ch;

    printf("Enter an integer: ");
    while (scanf("%d", &value) == 1) {
        printf("Enter a position: ");
        while (scanf("%d", &position) == 1) {
            printf("Position %d of %d is %d\n", position, value,
                   checkbit(value, position));
            printf("Enter a position: ");
        }
        CLEARINPUT;
        printf("\nEnter an integer: ");
    }

    puts("Bye.");
    return 0;
}

int checkbit(int value, int position) {
    value >>= (position - 1);
    return value & 1;
}