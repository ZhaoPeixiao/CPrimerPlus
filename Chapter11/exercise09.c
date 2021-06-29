//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>

#define LIMIT 50

void reverse_string(char *string);

char *get(char *string, int n);

int main(void) {
    char string[LIMIT];

    printf("Enter a string to reverse: ");
    get(string, LIMIT);
    while (string[0] != '\0') {
        reverse_string(string);
        printf("Your string reversed: %s\n", string);

        printf("Enter a string to reverse (empty line to quit): ");
        get(string, LIMIT);
    }

    puts("Bye");
    return 0;
}

void reverse_string(char *start) {
    char *end = start;
    char tmp;
    while (*(end + 1) != '\0') {
        end++;
    }

    while (start < end) {
        tmp = *start;
        *start = *end;
        *end = tmp;

        start++;
        end--;
    }
}

char *get(char *string, int n) {
    char *return_value = fgets(string, n, stdin);

    while (*string != '\0') {
        if (*string == '\n') {
            *string = '\0';
            break;
        }

        string++;
    }

    return return_value;
}