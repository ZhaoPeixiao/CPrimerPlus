//
// Created by Peixiao on 2021/7/2.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 10
#define MONTHS 12

void get(char *, int);

struct month {
    char name[LEN];
    char abrev[4];
    char monthno[3];
    int days;
};

struct month months[MONTHS] = {
        {"January",   "JAN", "01", 31},
        {"February",  "FEB", "02", 28},
        {"March",     "MAR", "03", 31},
        {"April",     "APR", "04", 30},
        {"May",       "MAY", "05", 31},
        {"June",      "JUN", "06", 30},
        {"July",      "JUL", "07", 31},
        {"August",    "AUG", "08", 31},
        {"September", "SEP", "09", 30},
        {"October",   "OCT", "10", 31},
        {"November",  "NOV", "11", 30},
        {"December",  "DEC", "12", 31}
};

int main(void) {
    int year, day, i, total;
    char month[LEN];

    printf("Please enter a year: ");
    while (scanf("%d", &year) != 1) {
        while (getchar() != '\n') {
            continue;
        }

        printf("Please enter a year: ");
    }
    while (getchar() != '\n') {
        continue;
    }
    printf("Please enter a month by name, abbreviation\n");
    printf("or two-digit number (eg. January, JAN or 01): ");
    get(month, LEN);
    printf("Please enter a day: ");
    while (scanf("%d", &day) != 1) {
        while (getchar() != '\n') {
            continue;
        }

        printf("Please enter a day: ");
    }
    while (getchar() != '\n') {
        continue;
    }

    for (i = 0; i < MONTHS; i++) {
        if (strcmp(month, months[i].name) == 0 || strcmp(month, months[i].abrev) == 0 ||
            strcmp(month, months[i].monthno) == 0) {
            break;
        }
    }

    if (i == MONTHS) {
        printf("No month matching %s found.\n", month);
        exit(1);
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        months[1].days = 29;
    }

    if (day > months[i].days) {
        printf("Invalid date: there is no date %d in %s %d.\n",
               day, months[i].name, year);
        exit(1);
    }

    total = 0;
    for (int j = 0; j < i; j++) {
        total += months[j].days;
    }

    total += day;

    printf("There are %d days in %d through %s %d.\n",
           total, year, months[i].name, day);

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