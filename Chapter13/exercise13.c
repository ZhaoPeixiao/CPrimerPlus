//
// Created by Peixiao on 2021/7/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    int ch;
    int rows = 0, cols = 0, lastrow_cols;
    bool first_line;

    if (argc != 3) {
        printf("Usage: %s <data file> <image file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    first_line = true;
    while ((ch = getc(fp)) != EOF && isdigit(ch)) {
        cols = 1;
        while ((ch = getc(fp)) != EOF && ch != '\n') {
            if (isdigit(ch)) {
                cols++;
            }
        }
        if (first_line) {
            first_line = false;
        } else {
            if (cols != lastrow_cols) {
                fprintf(stderr, "Invalid data file: unequal number of columns in rows.\n");
                exit(EXIT_FAILURE);
            }
        }
        lastrow_cols = cols;
    }
    if (cols == 0) {
        fprintf(stderr, "Invalid data file.\n");
        exit(EXIT_FAILURE);
    }

    rewind(fp);
    while ((ch = getc(fp)) != EOF) {
        if (ch == '\n') {
            rows++;
        }
    }

    int data[rows][cols];
    char img[rows][cols + 1];

    rewind(fp);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (fscanf(fp, "%d", *(data + i) + j) != 1) {
                fprintf(stderr, "Invalid data file.\n");
                exit(EXIT_FAILURE);
            }
        }
    }
    fclose(fp);

    for (int i = 0; i < rows; i++) {
        int j;
        for (j = 0; j < cols; j++) {
            switch (data[i][j]) {
                case (0):
                    ch = ' ';
                    break;
                case (1):
                    ch = '.';
                    break;
                case (2):
                    ch = '\'';
                    break;
                case (3):
                    ch = ':';
                    break;
                case (4):
                    ch = '~';
                    break;
                case (5):
                    ch = '*';
                    break;
                case (6):
                    ch = '=';
                    break;
                case (7):
                    ch = '}';
                    break;
                case (8):
                    ch = '&';
                    break;
                case (9):
                    ch = '#';
                    break;
                default:
                    fprintf(stderr, "Error: int out of bounds.\n");
                    exit(EXIT_FAILURE);
            }
            img[i][j] = ch;
        }
        img[i][j] = '\0';
    }

    if ((fp = fopen(argv[2], "w")) == NULL) {
        fprintf(stderr, "Could not open file %s.\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; i++) {
        puts(img[i]);
        fprintf(fp, "%s\n", img[i]);
    }
    fclose(fp);

    return 0;
}