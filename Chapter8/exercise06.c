//
// Created by Peixiao on 2021/6/24.
//


#include <stdio.h>
#include <ctype.h>

int get_first();

int main() {
    int ch;

    printf("Test program for get_first():\n");
    printf("Enter a line; you should see the first non-whitespace\n");
    printf("character echoed in the terminal:\n");

    ch = get_first();
    printf("%c\n", ch);

    return 0;
}

int get_first() {
    int ch, garbage;
    do {
        ch = getchar();
    } while (isspace(ch));

    while ((garbage == getchar()) != '\n' && garbage != EOF);

    return ch;
}

