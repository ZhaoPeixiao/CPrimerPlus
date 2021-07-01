//
// Created by Peixiao on 2021/7/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 41

int main(void) {
    FILE *fp;
    char words[MAX];
    char line[MAX + 6];
    int word_count = 1;

    if ((fp = fopen("wordy", "a+")) == NULL) {
        fprintf(stdout, "Can't open \"wordy\" file.\n");
        exit(EXIT_FAILURE);
    }

    rewind(fp);

    while (fgets(line, MAX + 6, fp) != NULL) {
        word_count++;
    }

    puts("Enter words to add to the file; press the #");
    puts("key at the beginning of a line to terminate.");

    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#')) {
        fprintf(fp, "%d %s\n", word_count++, words);
    }

    puts("File contents:");
    rewind(fp);
    while (fgets(line, MAX + 6, fp) != NULL) {
        fputs(line, stdout);
    }
    puts("Done!");

    if (fclose(fp) != 0) {
        fprintf(stderr, "Error closing file\n");
    }

    return 0;
}