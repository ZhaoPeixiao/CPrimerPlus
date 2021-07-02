//
// Created by Peixiao on 2021/7/2.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MONTHS 12
#define LEN 20
#define ABREV_LEN 3

int daysupto(const char *);

void get(char *, int);

struct month {
    char name[LEN];
    char abr[ABREV_LEN];
    int month_no;
    int days;
};

struct month months[MONTHS];
int days_in_month[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
char *names[MONTHS] = {"January", "February", "March", "April", "May",
                       "June", "July", "August", "September", "October",
                       "November", "December"};
char *abrevs[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul",
                        "Aug", "Sep", "Oct", "Nov", "Dec"};

int main(void) {
    char month_name[LEN];
    int totaldays;
    printf("Enter the full name of a month, capitalized (eg. March): ");
    get(month_name, LEN);

    totaldays = daysupto(month_name);

    if (totaldays != 0) {
        printf("There are %d days in the year up to and including %s.\n",
               totaldays, month_name);
    } else {
        printf("There is no month named %s\n", month_name);
    }

    puts("Bye.");
    return 0;
}

int daysupto(const char *month_name) {
    for (int i = 0; i < MONTHS; i++) {
        strncpy(months[i].name, names[i], LEN);
        strncpy(months[i].abr, abrevs[i], ABREV_LEN);
        months[i].month_no = i + 1;
        months[i].days = days_in_month[i];
    }

    int totaldays = 0;

    for (int i = 0; i < MONTHS; i++) {
        totaldays += months[i].days;

        if (strcmp(month_name, months[i].name) == 0) {
            return totaldays;
        }
    }

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