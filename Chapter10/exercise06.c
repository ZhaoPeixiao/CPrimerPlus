//
// Created by Peixiao on 2021/6/28.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void reverse_array(double *arr, int arr_size);

int main(void){
    printf("Testing reverse_array()\n");

    double test[SIZE];

    printf("%10s: ", "Original");
    for (int i = 0; i < SIZE; i++) {
        printf("%5.2f ", test[i]);
    }
    putchar('\n');
    reverse_array(test, SIZE);
    printf("%10s: ", "Reversed");
    for (int i = 0; i < SIZE; i++) {
        printf("%5.2f ", test[i]);
    }
    putchar('\n');
}

void reverse_array(double *arr, int arr_size){
    double tmp;
    for (int i = 0; i < arr_size; i++) {
        tmp = arr[i];
        arr[i] = arr[arr_size - i - 1];
        arr[arr_size - i - 1] = tmp;
    }
}