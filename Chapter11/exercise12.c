//
// Created by Peixiao on 2021/6/29.
//

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
    char ch;
    int upcase_letters, lowcase_letters, punct_chars, digits, words;
    upcase_letters = lowcase_letters = punct_chars = digits = words = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF) {
        if (isalpha(ch)) {
            if (!inword) {
                inword = true;
                words++;
            }

            if (isupper(ch)) {
                upcase_letters++;
            }
            if (islower(ch)) {
                lowcase_letters++;
            }
        } else if (ispunct(ch)) {
            punct_chars++;

            if (ch != '-' && ch != '\'') {
                inword = false;
            }
        } else if (isdigit(ch)) {
            digits++;
            inword = false;
        } else if (isspace(ch)) {
            inword = false;
        }
    }
    printf("Number of %s: %d\n", "lowercase letters", lowcase_letters);
    printf("Number of %s: %d\n", "uppercase letters", upcase_letters);
    printf("Number of %s: %d\n", "punctuation characters", punct_chars);
    printf("Number of %s: %d\n", "digits", digits);
    printf("Number of %s: %d\n", "words", words);

    return 0;
}