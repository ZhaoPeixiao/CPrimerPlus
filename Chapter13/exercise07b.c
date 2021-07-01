//
// Created by Peixiao on 2021/7/1.
//

#include <stdio.h>
#include <stdlib.h>

#define LLEN 70

void fget(char *string, int n, FILE *file);

int main(int argc, char *argv[]) {
    FILE *file1, *file2;
    char tmp[LLEN];

    if (argc < 3) {
        printf("Usage: %s file1 file2\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((file1 = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((file2 = fopen(argv[2], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    while (1){
        fget(tmp, LLEN, file1);
        printf("%-*s\n", LLEN, tmp);
        fget(tmp, LLEN, file2);
        if (feof(file1) && feof(file2)) {
            break;
        }
    }

    return 0;
}

void fget(char *string, int n, FILE *file) {

    fgets(string, n, file);

    while (*string != '\0') {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }
}