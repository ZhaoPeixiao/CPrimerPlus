//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>

#define LIMIT 50

int is_within(char ch, const char *string);

char *get(char *string, int n);

int main(void) {
    char string[LIMIT];
    char ch;

    printf("Enter a string to search: ");
    get(string, LIMIT);
    while (string[0] != '\0') {
        printf("Enter a character to search for: ");
        ch = getchar();

        if (ch != '\n') {
            while (getchar() != '\n') {
                continue;
            }
        }

        char *contains = is_within(ch, string) ? "" : " not";

        printf("\"%s\" does%s contain %c\n", string, contains, ch);

        printf("Enter a string to search (empty line to quit): ");
        get(string, LIMIT);
    }
    puts("Bye");

    return 0;
}

int is_within(char ch, const char *string) {
    while (*string != '\0') {
        if (*string == ch) {
            return 1;
            string++;
        }
    }

    return 0;
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