//
// Created by Peixiao on 2021/7/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SLEN 81

void get(char *string, int n);

int main(void) {
    int ch;
    FILE *fsource;
    FILE *fdest;
    char source[SLEN];
    char dest[SLEN];

    printf("Enter a source file: ");
    get(source, SLEN);
    printf("Enter a destination file: ");
    get(dest, SLEN);

    if ((fsource = fopen(source, "r")) == NULL) {
        fprintf(stderr, "Could not open file %s for read.\n", source);
        exit(EXIT_FAILURE);
    }
    if ((fdest = fopen(dest, "w")) == NULL) {
        fprintf(stderr, "Could not open file %s for write.\n", dest);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fsource)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        putc(ch, fdest);
    }

    fclose(fsource);
    fclose(fdest);

    return 0;
}


void get(char *string, int n) {
    fgets(string, n, stdin);

    while (*string != '\0') {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }
}