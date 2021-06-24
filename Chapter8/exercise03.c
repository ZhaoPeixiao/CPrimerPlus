//
// Created by Peixiao on 2021/6/24.
//

#include <stdio.h>
#include <ctype.h>


int main() {
    int ch;
    int uppercase_count = 0, lowercase_count = 0, other_count = 0;

    while ((ch = getchar()) != EOF) {
        if (isupper(ch)) {
            uppercase_count++;
        } else if (islower(ch)) {
            lowercase_count++;
        } else {
            other_count++;
        }
    }

    printf("Character Counts\n");
    printf("Uppercase letters: %d\n", uppercase_count);
    printf("Lowercase letters: %d\n", lowercase_count);
    printf("Other: %d\n", other_count);

    return 0;
}