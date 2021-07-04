//
// Created by Peixiao on 2021/7/5.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_SIZE 100

void sample(int *arr, int arr_size, int n);

int mian(void) {
    int array[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        array[i] = i;
    }

    int n;

    printf("How many items would you like to sample: ");

    while (scanf("%d", &n) == 1 && n > 0) {
        sample(array, ARR_SIZE, n);
        printf("How many items would you like to sample: ");
    }

    puts("Bye.");

    return 0;
}

void sample(int *arr, int arr_size, int n) {
    if (n > arr_size) {
        printf("Error: sample size can not be larger than the size of the array being sampled.\n");
        return;
    }

    bool chosen[arr_size];

    for (int i = 0; i < arr_size; i++) {
        chosen[i] = false;
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        int index = rand() % arr_size;
        while (chosen[index]) {
            index = rand() % arr_size;
        }
        printf("%d\n", arr[index]);
        chosen[index] = true;
    }

    return;
}