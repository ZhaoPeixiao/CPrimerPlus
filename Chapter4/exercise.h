//
// Created by Peixiao on 2021/6/14.
//

#ifndef CHAPTER4_EXERCISE_H
#define CHAPTER4_EXERCISE_H

#endif //CHAPTER4_EXERCISE_H

#include <stdio.h>
#include <string.h>
#include <float.h>

void ex1() {
    char name[40];
    char surname[40];
    printf("Please input your first name:");
    scanf("%s", name);
    printf("Please input your last name:");
    scanf("%s", surname);
    printf("Hell, %s %s\n", name, surname);
}


void ex2() {
    char name[40];
    int width;
    printf("Please enter your name:");
    scanf("%s", name);
    width = printf("\"%s\"\n", name);
    width -= 4;
    printf("\"%20s\".\n", name);
    printf("\"%-20s\".\n", name);
    printf("\"%*s\".\n", (width + 3), name);
}

void ex3() {
    float input;
    printf("Please enter a float number:");
    scanf("%f", &input);
    printf("The input is %.1f or %.1e \n", input, input);
}

void ex4() {
    float height;
    char name[40];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Hi %s, how tall you are :", name);
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall\n", name, height);
}

void ex5() {
    float speed_in_mbs, file_size_in_mb, time;
    printf("Enter the network speed(Mbs):");
    scanf("%f", &speed_in_mbs);
    printf("Enter the file size(Mb):");
    scanf("%f", &file_size_in_mb);
    time = file_size_in_mb * 8 / speed_in_mbs;
    printf("At %.2f megabits per second, a file of %.2f megabytes needs %.2f time to download\n", speed_in_mbs,
           file_size_in_mb, time);
}

void ex6() {
    char name[40], surname[40];
    int width_name, width_surname;
    printf("Please enter your name:");
    scanf("%s", name);
    printf("Please enter your surname:");
    scanf("%s", surname);
    width_name = printf("%s", name);
    printf(" ");
    width_surname = printf("%s", surname);
    printf("\n%*d %*d", width_name, width_name, width_surname, width_surname);
}

void ex7() {
    double d_third = 1.0 / 3.0;
    float f_third = 1.0 / 3.0;
    printf("float of one third(6) = %.6f\n", f_third);
    printf("float of one third(12) = %.12f\n", f_third);
    printf("float of one third(16) = %.16f\n", f_third);

    printf("double of one third(6) = %.6lf\n", d_third);
    printf("double of one third(12) = %.12lf\n", d_third);
    printf("double of one third(16) = %.16lf\n", d_third);

    printf("FLT_DIG in float.h is %d\n", FLT_DIG);
    printf("DBL_DIG in float.h is %d\n", DBL_DIG);
}

#define GALLON_TO_LITRE 3.785
#define MILE_TO_KM 1.609

void ex8() {
    float range, oil;
    printf("Please enter the range you traveled(in mile):");
    scanf("%f", &range);
    printf("Please enter yhe oil you use(in gallon):");
    scanf("%f", &oil);
    printf("In UAS, your oil wear is %.1f M/G\n", range / oil);
    printf("In Europe, your oil wear is %.1f L/100KM\n", (oil * GALLON_TO_LITRE) / (range * MILE_TO_KM));
}