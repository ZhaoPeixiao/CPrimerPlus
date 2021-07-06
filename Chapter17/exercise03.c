//
// Created by Peixiao on 2021/7/6.
//

#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

void showmovies(Item item);

char *get(char *st, int n);

int main(void) {
    List movies;
    Item temp;

    InitializeList(&movies);

    if (ListIsFull(&movies)) {
        fprintf(stderr, "No memory available! Bye!\n");
        exit(1);
    }

    puts("Enter first movie title:");
    while (get(temp.title, TSIZE) != NULL && temp.title[0] != '\0') {
        puts("Enter your rating <0-10>:");
        scanf("%d", &temp.rating);
        while (getchar() != '\n') {
            continue;
        }

        if (AddItem(temp, &movies) == false) {
            fprintf(stderr, "Problem allocating memory\n");
            break;
        }

        if (ListIsFull(&movies)) {
            puts("The list is now full.");
            break;
        }

        puts("Enter next movie title (empty line to stop):");
    }

    if (ListIsEmpty(&movies))
        printf("No data entered. ");
    else {
        printf("Here is the movie list:\n");
        Traverse(&movies, showmovies);
    }

    printf("You entered %d movies.\n", ListItemCount(&movies));

    EmptyTheList(&movies);

    printf("Bye!\n");
    return 0;
}

void showmovies(Item item) {
    printf("Movie: %s Rating: %d\n", item.title, item.rating);
}

char *get(char *string, int n) {
    char *return_value = fgets(string, n, stdin);

    while (*string != '\0') {
        if (*string == '\n') {
            *string = '\0';
            break;
        }
        string++;
    }

    return return_value;
}