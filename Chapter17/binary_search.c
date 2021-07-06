//
// Created by Peixiao on 2021/7/6.
//

#include "binary_search.h"

static int binarysearch_aux(int *arr, int target, int low, int high);

int binarysearch(int *arr, int arr_size, int target) {
    return binarysearch_aux(arr, target, 0, arr_size - 1);
}

static int binarysearch_aux(int *arr, int target, int low, int high) {
    if (low == high) {
        return arr[low] == target ? 1 : 0;
    } else {
        int mid = (low + high) / 2;
        if (arr[mid] < target) {
            return binarysearch_aux(arr, target, mid + 1, high);
        } else {
            return binarysearch_aux(arr, target, low, mid);
        }
    }
}