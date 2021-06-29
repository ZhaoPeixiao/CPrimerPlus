//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define SIZE 20

char *sgetnchar(char *array, int n);

int main(void) {
    char test[SIZE] = "Hello, ";
    int space = SIZE - strlen(test) - 1;
    printf("What's your name? (enter %d characters)\n", space);
    sgetnchar(test + 7, space);
    puts(test);

    return 0;
}

char *sgetnchar(char *array, int n) {
    int i = 0;
    char ch;
    while ((ch = getchar()) != EOF && !isspace(ch) && i < n) {
        *(array + i) = ch;
        i++;
    }

    return array;
}