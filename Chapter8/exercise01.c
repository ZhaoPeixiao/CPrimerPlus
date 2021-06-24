//
// Created by Peixiao on 2021/6/24.
//

#include <stdio.h>

int main() {
    int count = 0;
    while (getchar() != EOF) {
        count++;
    }
    printf("Character count: %d\n", count);

    return 0;
}
