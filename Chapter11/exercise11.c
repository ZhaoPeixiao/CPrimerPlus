//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define COUNT 10
#define LIMIT 50

void sort_ASCII(char *strings[], int n);

void sort_length(char *strings[], int n);

int fwlen(char *string);

void sort_firstword_length(char *strings[], int n);

char *get(char *string, int n);

void print_menu(void);

int main(void) {
    char strings[COUNT][LIMIT];
    char *strptrs[COUNT];
    char *success;
    char ch;

    // initialize array of pointers
    for (int i = 0; i < COUNT; i++) {
        strptrs[i] = strings[i];
    }

    printf("Enter up to 10 strings (EOF to stop): \n");

    // read up to ten strings from input
    for (int i = 0; i < COUNT; i++) {
        printf("%d: ", i + 1);
        success = get(strings[i], LIMIT);

        // if EOF encountered, stop reading strings
        if (!success)
            break;
    }

    printf("\n");

    print_menu();
    while ((ch = getchar()) != 'q') {
        // discard rest of the line
        if (ch != '\n') {
            while (getchar() != '\n') {
                continue;
            }
        }

        // sort strings
        switch (ch) {
            case ('a'):
                sort_ASCII(strptrs, COUNT);
                break;
            case ('l'):
                sort_length(strptrs, COUNT);
                break;
            case ('f'):
                sort_firstword_length(strptrs, COUNT);
                break;
            case ('o'):
                break;
            default:
                printf("Invalid input. Try again.\n\n");
                print_menu();
                continue;
        }

        // print sorted strings
        puts("");
        for (int i = 0; i < COUNT; i++) {
            puts(strptrs[i]);
        }

        puts("");
        print_menu();
    }

    puts("Bye");
    return 0;
}

void sort_ASCII(char *strings[], int n) {
    char *tmp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}

void sort_length(char *strings[], int n) {
    char *tmp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(strings[i]) > strlen(strings[j])) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
    }
}

int fwlen(char *string) {
    int length = 0;

    while (isspace(*string)) {
        string++;
    }

    while (!isspace(*string)) {
        length++;
        string++;
    }

    return length;
}

void sort_firstword_length(char *strings[], int n) {
    char *tmp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (fwlen(strings[i]) > fwlen(strings[j])) {
                tmp = strings[i];
                strings[i] = strings[j];
                strings[j] = tmp;
            }
        }
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