//
// Created by Peixiao on 2021/6/24.
//

#include <stdio.h>

int main() {
    int ch, char_count = 0;
    while ((ch = getchar()) != EOF) {
        if (ch >= ' ') {
            printf("\'%c\': %d", ch, ch);
        } else if (ch == '\n') {
            printf("\'\\n\': %d", ch);
        } else if (ch == '\t') {
            printf("\'\\t\': %d", ch);
        } else {
            printf("\'^%c\': %d", ch + 64, ch);
        }

        char_count++;
        if (char_count % 10 == 0) {
            printf("\n");
        } else {
            printf("  ");
        }
    }
    printf("\n");

    return 0;
}

