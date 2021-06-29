//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>

#define LIMIT 50

char *findchar(char *str, const char ch);

int main(void) {
    char string[LIMIT];
    char *chloc;
    char ch;

    printf("Enter a string to search: ");
    fgets(string, LIMIT, stdin);
    while (string[0] != '\n') {
        printf("Enter a character to search for: ");
        ch = getchar();
        if (ch != '\n') {
            while (getchar() != '\n') {
                continue;
            }
        }

        chloc = findchar(string, ch);
        if (chloc == NULL) {
            printf("Character %c not found in %s", ch, string);
        } else {
            printf("Character %c found  at index %lu in %s", ch, chloc - string, string);
        }

        printf("Enter a string to search (empty line to quit): ");
        fgets(string, LIMIT, stdin);
    }

    puts("Bye");

    return 0;
}

char *findchar(char *str, const char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return str;
            str++;
        }
    }
    return NULL;
}