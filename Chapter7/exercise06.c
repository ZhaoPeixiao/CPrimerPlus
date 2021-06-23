//
// Created by Peixiao on 2021/6/23.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP '#'

int main(void) {
    char ch;
    unsigned int ei_count = 0;
    bool e_flag = false;

    printf("This program reads input and counts the number of times the\n"
           "sequence 'ei' occurs (case insensitive).\n");
    printf("Enter input (%c to stop):\n", STOP);

    while ((ch = getchar()) != STOP) {
        ch = tolower(ch);
        if (ch == 'e') {
            e_flag = true;
        } else if (ch == 'i') {
            if (e_flag) {
                ei_count++;
            }
            e_flag = false;
        } else {
            e_flag = false;
        }
    }

    printf("The sequence 'ei' occurs %u times.\n", ei_count);

    return 0;
}