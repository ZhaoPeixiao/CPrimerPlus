//
// Created by Peixiao on 2021/6/22.
//

#ifndef CHAPTER6_EXERCISE_H
#define CHAPTER6_EXERCISE_H

#endif //CHAPTER6_EXERCISE_H

#include <stdio.h>
#include <string.h>

void ex1() {
    char alphabet[26];
    char c = 'a';
    for (int i = 0; i < 26; i++) {
        alphabet[i] = c;
        c++;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c ", alphabet[i]);
    }
}

void ex2() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("$");
        }
        printf("\n");
    }
}

void ex3() {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%c", 'F' - j);
        }
        printf("\n");
    }
}

void ex4() {
    char c = 'A';
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
}

void ex5() {
    int i, j, num;
    char c;
    printf("Enter the core char you want to print(A...Z): ");
    scanf("%c", &c);
    char ch = 'A';
    num = c - 'A' + 1;
    for (i = 1; i <= num; i++) {
        for (j = 0; j < num - i; j++) {
            printf(" ");
        }
        for (ch = 'A'; j < num; j++) {
            printf("%c", ch++);
        }
        for (j = 1, ch -= 2; j < i; j++, ch--) {
            printf("%c", ch);
        }
        printf("\n");
    }
}

void ex6() {
    int start, end;
    printf("Please enter the start number: ");
    scanf("%d", &start);
    printf("Please enter the end number: ");
    scanf("%d", &end);
    printf("Ori:   Square:    Cubic:\n");
    for (int i = start; i <= end; i++) {
        printf("%6d,%10d,%10d\n", i, i * i, i * i * i);
    }
}

void ex7() {
    char word[30];
    printf("Please enter the words: ");
    scanf("%s", word);
    printf("The word you enter is: %s\n", word);
    printf("The reverse word you enter is: ");
//    printf("%d", strlen(word));
    for (int i = strlen(word) - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
}

void ex8() {
    float x, y;
    printf("Please enter the two float data(separate by blank): ");
    while (scanf("%f %f", &x, &y) == 2) {
        printf("The answer is %f\n", (x - y) / (x * y));
        printf("Please enter the two float data(separate by blank): ");
    }
    printf("Program Exit!\n");
}

float calc(float x, float y) {
    return (x - y) / (x * y);
}

void ex9() {
    float x, y;
    printf("Please enter the two float data(separate by blank): ");
    while (scanf("%f %f", &x, &y) == 2) {
        printf("The answer is %f\n", calc(x, y));
        printf("Please enter the two float data(separate by blank): ");
    }
    printf("Program Exit!\n");
}

void ex10() {
    int start, end;
    printf("Enter the start and end integer: ");
    scanf("%d %d", &start, &end);
    while (start < end) {
        int sum = 0;
        for (int i = start; i <= end; i++) {
            sum += i * i;
        }
        printf("The sum is %d\n", sum);
        printf("Enter the start and end integer: ");
        scanf("%d %d", &start, &end);
    }
}

void ex11() {
    int data[8];
    printf("Enter the 8 integers data(separate by blank): ");
    for (int i = 0; i < 8; ++i) {
        scanf("%d", data[i]);
    }

    printf("The reverse data is: ");
    for (int i = 7; i >= 0; i--) {
        printf(" %d", data[i]);
    }
}

void ex12() {
    int length;
    double sum;
    printf("Enter the length: ");
    scanf("%d", &length);
    while (length > 0) {
        sum = 0.0;
        for (int i = 1; i <= length; i++) {
            sum += 1.0 / i;
        }
        printf("First sum is %lf\n", sum);
        sum = 0.0;
        for (int i = 1; i <= length; i++) {
            sum += (i % 2 == 0 ? -1.0 / i : 1.0 / i);
        }
        printf("Second sum is %lf\n", sum);
        sum = 0.0;
        for (int i = 1; i <= length; i++) {
            sum += (i % 2 != 0 ? 2 * 1.0 / i : 0);
        }
        printf("Third sum is %lf\n", sum);
        printf("Enter the length: ");
        scanf("%d", &length);
    }
}

void ex13() {
    int data[8];
    data[0] = 2;
    for (int i = 1; i < 8; i++) {
        data[i] = data[i - 1] * 2;
    }
    int i = 0;
    do {
        printf("%d ", data[i++]);
    } while (i < 8);
}

void ex14() {
    double first[8], second[8];
    printf("Enter 8 data for the FIRST array: ");
    for (int i = 0; i < 8; ++i) {
        scanf("%lf", &first[i]);
    }
    for (int i = 0; i < 8; i++) {
        double sum = 0;
        for (int j = 00; j <= i; j++) {
            sum += first[j];
        }
        second[i] = sum;
    }
    printf("All the data of the two arrays:\n");
    printf("First: ");
    for (int i = 0; i < 8; ++i) {
        printf("&12lf. ", first[i]);
    }
    printf("\nSecond: ");
    for (int i = 0; i < 8; ++i) {
        printf("&12lf. ", second[i]);
    }
}

void ex15() {
    char data[256];
    printf("Enter the char in a line: ");
    int i = 0;
    do {
        scanf("%c", &data[i]);
    } while (data[i] != '\n' && ++i);
    printf("The reverse char of the data: ");
    for (i--; i >= 0; i--) {
        printf("%c", data[i]);
    }
}

void ex16() {
    float daphne, deirdre;
    daphne = deirdre = 100.0;
    int year;
    do {
        daphne = daphne + 100 * 0.1;
        deirdre = deirdre + deirdre * 0.05;
        year++;
    } while (deirdre - daphne < 0);
    printf("%d years later.\nDaphe = %f.\nDeirdre=%f\n", year, daphne, deirdre);
}

void ex17() {
    float chuckie = 100;
    int year = 0;
    do {
        chuckie += chuckie * 0.08;
        chuckie -= 10;
        year++;
        printf("%f\n", chuckie);
    } while (chuckie > 9);
    printf("%d years later, Chuckie's account %f\n", year, chuckie);
    printf("%d years later, Chuckie's account is null\n", year);
}

void ex18() {
    int rabnud = 5;
    int weeks = 1;
    while (rabnud < 150) {
        printf("At %d week, Rabnud has %4d friends\n", weeks, rabnud);
        rabnud = 2 * (rabnud - weeks++);
    }
}