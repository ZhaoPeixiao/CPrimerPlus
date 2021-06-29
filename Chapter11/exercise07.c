//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>

#define LIMIT 50

char *mystrcpy(char *s1, char *s2, int n);

char *get(char *string, int n);

void clear_string(char *string, int n);

int main(void) {
    char s1[LIMIT];
    char s2[LIMIT];
    int n;

    printf("Enter a string to copy: ");
    get(s2, LIMIT);
    while (s2[0] != '\0') {
        printf("How many characters do you want to copy? (maximum %d) ", LIMIT);
        scanf("%d", &n);

        while (getchar() != '\n') {
            continue;
        }

        if (n > LIMIT) {
            n = LIMIT;
        }

        printf("Original string: %s\n", s2);
        mystrcpy(s1, s2, n);
        printf("Copy: %s\n", s1);

        clear_string(s1, LIMIT);

        printf("Enter a string to copy (empty line to quit): ");
        get(s2, LIMIT);
    }

    puts("Bye");

    return 0;
}

char *mystrcpy(char *s1, char *s2, int n) {
    int i = 0;
    while (s2[i] != '\0' && i < n) {
        s1[i] = s2[i];
        i++;
    }

    while (i < n) {
        s1[i] = '\0';
        i++;
    }

    return s1;
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

void clear_string(char *string, int n) {
    for (int i = 0; i < n; i++) {
        string[i] = '\0';
    }
}