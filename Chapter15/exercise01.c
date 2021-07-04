//
// Created by Peixiao on 2021/7/4.
//

#include <stdio.h>

int parsebinarystring(const char *string);

int main(void) {
    int result;
    char *binstring = "01001001";
    printf("%s in base-10 is %d.\n", binstring, parsebinarystring(binstring));

    return 0;
}

int parsebinarystring(const char *string) {
    int retval = 0;
    while (*string != '\0') {
        retval <<= 1;
        if (*string == '1') {
            retval |= 1;
        }
        string++;
    }
    return retval;
}