//
// Created by Peixiao on 2021/7/2.
//

#include <stdio.h>
#include <ctype.h>

#define LEN 5
#define MAXNAME 20

struct Name {
    char first[MAXNAME];
    char middle[MAXNAME];
    char last[MAXNAME];
};

struct Person {
    int ssn;
    struct Name name;
};

void printpersona(struct Person *);

void printpersonb(struct Person);

int main(void) {
    struct Person people[LEN] = {
            {123456789, {"Marvin",  "The",    "Martian"}},
            {987654321, {"Scrooge", "Mc",     "Duck"}},
            {888777666, {"Mantis",  "Froggy", "Tobogan"}},
            {123432467, {.first="Night", .last="Man"}},
            {354257623, {.first="Day", .last="Man"}}
    };

    for (int i = 0; i < LEN; ++i) {
        printpersona(&people[i]);
    }
    puts("");

    for (int i = 0; i < LEN; ++i) {
        printpersonb(people[i]);
    }

    return 0;
}

void printpersona(struct Person *person) {
    printf("%s, %s ", person->name.last, person->name.first);
    if (person->name.middle[0] != '\0') {
        printf("%c. ", toupper(person->name.middle[0]));
    }
    printf("--- %d\n", person->ssn);
}

void printpersonb(struct Person person) {
    printf("%s, %s ", person.name.last, person.name.first);
    if (person.name.middle != '\0') {
        printf("%c. ", toupper(person.name.middle[0]));
    }
    printf("--- %d\n", person.ssn);
}

