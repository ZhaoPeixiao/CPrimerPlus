//
// Created by Peixiao on 2021/6/21.
//

#ifndef CHAPTER5_EXERCISE_H
#define CHAPTER5_EXERCISE_H

#endif //CHAPTER5_EXERCISE_H

#include <stdio.h>
#include <math.h>

#define MIN_PER_HOUR 60

void ex1() {
    int hours, minutes, input;
    printf("CONVERT MINUTES TO HOURS\n");
    printf("PLEASE INPUT THE NUMBER OF MINUTES (<=0 TO QUIT):");
    scanf("%d", &input);
    while (input > 0) {
        hours = input / MIN_PER_HOUR;
        minutes = input % MIN_PER_HOUR;
        printf("CONVERT TO %d HOURS AND %d MINUTES\n", hours, minutes);
        printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES (<=0 TO QUIT):");
        scanf("%d", &input);
    }
    printf("PROGRAM EXIT!\n");
}


void ex2() {
    int counter, i = 0;
    printf("PRINT CONTINUE 10 NUMBERS\n");
    printf("PLEASE INPUT THE START NUMBER:");
    scanf("%d", &counter);
    while (++i < 10) {
        printf(" %d \n", counter++);
    }
    printf("PROGRAM EXIT!\n");
}

#define WEEK_PER_DAY 7

void ex3() {
    int days, weeks, input;
    printf("CONVERT DAYS TO WEEKS\n");
    printf("PLEASE INPUT THE NUMBER OF DAYS (<=0 TO QUIT):");
    scanf("%d", &input);
    while (input > 0) {
        weeks = input / WEEK_PER_DAY;
        days = input % WEEK_PER_DAY;
        printf("%d days are %d weeks and %d days\n", input, weeks, days);
        printf("PLEASE INPUT THE NUMBER OF DAYS (<=0 TO QUIT):");
        scanf("%d", &input);
    }
    printf("PROGRAM EXIT!\n");
}

#define FEET_TO_CM 30.48
#define INCH_TO_CM 2.54

void ex4() {
    int feet;
    float inches, cm;
    printf("CONVERT CM TO INCHES\n");
    printf("ENTER THE HEIGHT IN CENTIMETERS(<=0 TO QUIT):");
    scanf("%f", &cm);
    while (cm > 0) {
        feet = cm / FEET_TO_CM;
        inches = (cm - feet * FEET_TO_CM) / INCH_TO_CM;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
        printf("ENTER THE HEIGHT IN CENTIMETERS(<=0 TO QUIT):");
        scanf("%f", &cm);
    }
    printf("PROGRAM EXIT!\n");
}


void ex5() {
    int count = 0, sum = 0;
    printf("Enter the number of days you work:");
    scanf("%d", &count);
    while (count > 0) {
        sum += count--;
    }
    printf("You earned $ %d total\n", sum);
    printf("PROGRAM EXIT!\n");
}

void ex6() {
    int count = 0, sum = 0;
    printf("Enter the number of days you work:");
    scanf("%d", &count);
    while (count > 0) {
        sum += pow(count, 2);
        count--;
    }
    printf("You earned $ %d total\n", sum);
    printf("PROGRAM EXIT!\n");
}

double cubic(double n);

void ex7() {
    double input;
    printf("Enter the double datum to calc cubic:");
    scanf("%d", &input);
    cubic(input);
    printf("PROGRAM EXIT!\n");
}

double cubic(double n) {
    double t = n * n * n;
    printf("THe %lg's cubic is %lg\n", n, t);
    return t;
}

void ex8() {
    int first, second;
    printf("This program computes moduli.\n");
    printf("Enter an integer to server as the second operand (<=0 TO QUIT) :");
    scanf("%d", &second);
    printf("Enter the first operand:");
    scanf("%d", &first);
    while (first > 0) {
        printf("%d %% %d is %d\n", first, second, (first % second));
        printf("Enter the next number to be the first operand (<=0 TO QUIT) :");
        scanf("%d", &first);
    }
    printf("PROGRAM EXIT!\n");
}

int Temperatures(double fahrenheit) {
    const double F_TO_C = 32.0;
    const double C_TO_K = 273.16;
    double celsius, kelvin;
    celsius = 5.0 / 9.0 * (fahrenheit - F_TO_C);
    kelvin = celsius + C_TO_K;
    printf("%.2f fahrenheit = %.2f celsius, and %.2f kelvin\n", fahrenheit, celsius, kelvin);
}

void ex9() {
    double input;
    printf("This program convert fahrenheit to celsius and kelvin\n");
    printf("Enter a fahrenheit to start: ");
    while (scanf("%lf", &input) == 1) {
        Temperatures(input);
        printf("Enter next fahrenheit! (q to QUIT): ");
    }
    printf("PROGRAM EXIT!\n");
}
