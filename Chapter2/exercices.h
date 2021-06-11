//
// Created by Peixiao on 2021/6/11.
//

#ifndef CHAPTER2_EXERCICES_H
#define CHAPTER2_EXERCICES_H

#endif //CHAPTER2_EXERCICES_H

#include <stdio.h>

#define NAME "Gustav"
#define SURNAME "Mahler"

void ex1(void){
    printf("%s %s\n", NAME, SURNAME);
    printf("%s\n%s\n", NAME, SURNAME);
    printf("%s", NAME);
    printf("%s\n", SURNAME);
}

#define MYNAME "Peixiao"
#define MYADDRESS "Anhui"

void ex2(void){
    printf("%s\n", MYNAME);
    printf("%S\n", MYADDRESS);
}

#define DAYS_PER_YEAR 365

void ex3(){
    int age, days;
    printf("Please enter your age\n");
    scanf("%d", &age);
    days = age * DAYS_PER_YEAR;
    printf("Your age is %d and it is %d days\n", age, days);
}

void jolly(void);
void deny(void);

void ex4(){
    jolly();
    jolly();
    jolly();
    deny();
}

void jolly(void){
    printf("Jolly");
}

void deny(void){
    printf("deny");
}


void br(void){
    printf("Brazil, Russia");
}
void ic(void){
    printf("India, China");
}

void ex5(void){
    br();
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");
}

void ex6(void){
    int toes = 10;
    printf("toes = %d, double is %d, square is %d\n", toes, 2 * toes, toes * toes);
}

void smile(void){
    printf("Smile!");
}

void ex7(void){
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
}


void one_three(void);
void two(void);

void ex8(void){
    printf("Starting from now:\n");
    one_three();
    printf("Done!");
}

void one_three(void){
    printf("one\n");
    two();
    printf("three\n");
}

void two(void){
    printf("two\n");
}