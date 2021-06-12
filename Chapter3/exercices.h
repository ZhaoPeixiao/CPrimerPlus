//
// Created by Peixiao on 2021/6/12.
//

#ifndef CHAPTER3_EXERCICES_H
#define CHAPTER3_EXERCICES_H

#endif //CHAPTER3_EXERCICES_H

#include <stdio.h>
#include <float.h>
#include <limits.h>

void ex1() {
    // 有符号整型数上限 2^32 -1.
    int big_int = 2147483647;

    float big_float = 3.4e38;

    float small_float = 10.0 / 3;

    printf("The big int data is %d\n", big_int + 1);

    printf("The big float is %f\n", big_float * 10);

    printf("The big float data is %f\n", small_float);

    printf("The MAX float data is %f\n", FLT_MAX);

    printf("The MAX int data is %d\n", INT_MAX);
}


void ex2() {
    int input;
    printf("Enter a value of char int ASCII: ");
    scanf("%d", &input);
    printf("Your input value is %d, and char is %c\n", input, input);

}

void ex3() {
    char ch = '\a';
    printf("%c", ch);

    printf("Starled by the sudden sound, Sally shouted, \n");
    printf("\"By the Great Pumpkin, what was that!\"\n");
}

void ex4() {
    float input;
    printf("Enter a floating-point value: ");
    scanf("%f", &input);
    printf("fixed-point notation: %f \n", input);
    printf("exponential notation: %e \n", input);
    printf("p notation: %a \n", input);
}

#define SEC_PER_YEAR 3.156e7

void ex5() {
    float second, year;
    printf("Enter how many years old you are:");
    scanf("%f", &year);
    second = year * SEC_PER_YEAR;
    printf("You are %lf years old.\n", year);
    printf("And you are %e seconds old, too.\n", second);
}

#define MASS_PER_MOLE 3.0e-23
#define MASS_PER_QUARE 950

void ex6() {
    float quart, quantity;
    printf("Enter how many quart:");
    scanf("%f", &quart);
    quantity = quart * MASS_PER_QUARE / MASS_PER_MOLE;
    printf("There are %e molecule.\n", quantity);
}

#define INCH_TO_CM 2.54

void ex7() {
    float height_in_inch, height_in_cm;
    printf("Enter the inch of your height:");
    scanf("%f", &height_in_inch);
    height_in_cm = height_in_inch * INCH_TO_CM;
    printf("you are %.2f inch, or %.2f cm height\n", height_in_inch, height_in_cm);
}

#define PINT_CUP 2
#define CUP_OUNCE 8
#define OUNCE_SPOON 2
#define SPOON_TEA 3

void ex8() {
    float pint, cup, ounce, spoon, tea_spoon;
    printf("Enter how many cup:");
    scanf("%f", &cup);
    pint = cup / PINT_CUP;
    ounce = cup * CUP_OUNCE;
    spoon = ounce * OUNCE_SPOON;
    tea_spoon = spoon * SPOON_TEA;
    printf("%.1f cup equals %.1f pint, %.1f ounce, %.1f spoon, %.1f tea_spoon\n", cup, pint, ounce, spoon, tea_spoon);
}