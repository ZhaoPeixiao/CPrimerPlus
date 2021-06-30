//
// Created by Peixiao on 2021/6/30.
//

#include <stdio.h>
#include <stdlib.h>

#define SIZE 1000

void random_sample(void);

int main(void) {
    for (int i = 0; i < 10; ++i) {
        printf("Random Sample: run #%d\n", i + 1);
        srand(i);
        random_sample();
        putchar('\n');
    }
}

void random_sample(void) {
    int counts[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    const int RAND_LIMIT = (RAND_MAX / 10) * 10;
    int rand_int;

    int i = 0;
    while (i < SIZE) {
        rand_int = rand();
        if (rand_int >= RAND_LIMIT) {
            continue;
        } else {
            rand_int %= 10;
            counts[rand_int]++;
        }
        i++;
    }
    puts("Counts");
    for (int i = 0; i < 10; i++) {
        printf("%2d: %3d  ", i + 1, counts[i]);
    }
    putchar('\n');
}