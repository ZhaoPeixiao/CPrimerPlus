//
// Created by Peixiao on 2021/7/6.
//

#ifndef CHAPTER17_TREE_H
#define CHAPTER17_TREE_H

#include <stdbool.h>

#define WORD_SIZE 30

typedef struct {
    char word[WORD_SIZE];
    int count;
} Item;

typedef struct node {
    Item item;
    struct node *left;
    struct node *right;
} Node;

typedef Node *Tree;

Tree *InitializeTree(Tree *ptree);

bool TreeIsEmpty(const Tree *ptree);

bool TreeIsFull(const Tree *ptree);

bool AddWord(const char *word, Tree *ptree);

bool DeleteWord(const char *word, Tree *ptree);

bool InTree(const char *word, const Tree *ptree);

void ApplyToAll(const Tree *ptree, void (*fn)(Item));

void ApplyToNode(const char *word, const Tree *ptree, void (*fn)(Item));

void DeleteAll(Tree *ptree);

#endif //CHAPTER17_TREE_H
