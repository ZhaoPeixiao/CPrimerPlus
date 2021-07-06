//
// Created by Peixiao on 2021/7/6.
//

#include <stdio.h>
#include "binary_search.h"

int main(void) {
    int arr[10] = {1, 4, 6, 9, 11, 12, 15, 19, 25, 40};

    for (int i = 0; i < 15; i++) {
        printf("%d in array? %s\n", i, binarysearch(arr, 10, i) ? "yes" : "no");
    }
}