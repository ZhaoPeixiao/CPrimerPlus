//
// Created by Peixiao on 2021/6/28.
//

#include <stdio.h>

void print_Nx5_int_array(int (*array)[5], int rows);

void double_Nx5_int_array(int (*array)[5], int rows);

int main(void) {
    int array[3][5] = {{2,  5,  6,  9,  1},
                       {23, 1,  5,  66, 54},
                       {9,  73, 23, 39, 2}};

    printf("Original array:\n");
    print_Nx5_int_array(array, 3);

    // double array and print new values
    double_Nx5_int_array(array, 3);
    printf("Doubled array:\n");
    print_Nx5_int_array(array, 3);

    return 0;
}

void print_Nx5_int_array(int (*array)[5], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" %5d ", array[i][j]);
        }
        putchar('\n');
    }
}

void double_Nx5_int_array(int (*array)[5], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 5; j++) {
            array[i][j] *= 2;
        }
    }
}