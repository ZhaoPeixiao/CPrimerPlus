//
// Created by Peixiao on 2021/7/6.
//

#ifndef CHAPTER17_STACK_H
#define CHAPTER17_STACK_H

#include <stdbool.h>

typedef struct node
{
    char item;
    struct node * previous;
} Node;

typedef Node * Stack;

Stack * InitializeStack(Stack * pstack);

bool PushItem(const char * pch, Stack * pstack);

bool PopItem(char *pch, Stack * pstack);

void EmptyStack(Stack * pstack);

#endif //CHAPTER17_STACK_H

