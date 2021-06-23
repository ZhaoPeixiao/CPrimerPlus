//
// Created by Peixiao on 2021/6/23.
//

#include <stdio.h>

#define STOP '#'

int main(void) {
    char ch;
    unsigned int spaces = 0, newlines = 0, others = 0;
    while ((ch = getchar()) != STOP) {
        if (ch == ' ') {
            spaces++;
        } else if (ch = '\n') {
            newlines++;
        } else {
            others++;
        }
    }
    printf("\n");
    printf("Character Count:\n");
    printf("----------------\n");
    printf("Spaces: %u\n"
           "Newlines: %u\n"
           "Other: %u\n", spaces, newlines, others);
    return 0;
}