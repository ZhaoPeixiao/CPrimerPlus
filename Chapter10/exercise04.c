//
// Created by Peixiao on 2021/6/28.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int index_of_max(double *arr, int arr_szie);

int main(void) {
    printf("Driver for index_of_max: returns index of the largest value stored "
           "in an array of doubles.\n");
    putchar('\n');

    double test[SIZE];

    srand(time(NULL));


    for (int i = 0; i < SIZE; i++) {
        test[i] = rand() / (double) RAND_MAX;
    }

    printf("%5s ", "Index");
    for (int i = 0; i < SIZE; i++) {
        printf("| %6d ", i);
    }
    printf("\n");
    printf("%5s ", "Value");
    for (int i = 0; i < SIZE; i++) {
        printf("| %6.4f ", test[i]);
    }
    printf("\n");
    printf("\n");
    printf("The maximum value occurs at index %d\n", index_of_max(test, SIZE));

    return 0;
}

int index_of_max(double *arr, int arr_szie) {
    int index_of_max = 0;
    for (int i = 1; i < arr_szie; i++) {
        if (*(arr + i) > *(arr + index_of_max)) {
            index_of_max = i;
        }
    }
    return index_of_max;
}
