//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>

#define LIMIT 50

char *string_in(char *string, char *substring);

char *get(char *string, int n);

int main(void) {
    char string[LIMIT];
    char substring[LIMIT];

    char *substr_loc;

    printf("Enter a string: ");
    get(string, LIMIT);
    while (string[0] != '\0') {
        printf("Enter a substring to look for: ");
        get(substring, LIMIT);

        substr_loc = string_in(string, substring);

        if (substr_loc == NULL) {
            printf("%s not in %s\n", substring, string);
        } else {
            printf("%s found in %s at index %lu\n",
                   substring, string, substr_loc - string);
        }

        printf("Enter a string (empty line to quit): ");
        get(string, LIMIT);
    }

    puts("Bye");

    return 0;
}

char * string_in(char *string, char *substring){
    int i;
    while (*string != '\0') {
        i = 0;
        while (*(string + i) == *(substring + i)) {
            i++;
            if (*(substring + i) == '\0') {
                return string;
            }
        }
        string++;
    }

    return NULL;
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