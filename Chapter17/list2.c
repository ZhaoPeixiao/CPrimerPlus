//
// Created by Peixiao on 2021/7/6.
//

#include <stdio.h>
#include <stdlib.h>
#include "list2.h"

void InitializeList(List *plist) {
    plist->items = 0;
}

bool ListIsEmpty(const List *plist) {
    return (plist->items == 0);
}

bool ListIsFull(const List *plist) {
    return (plist->items == MAXSIZE);
}

bool AddItem(Item item, List *plist) {
    if (plist->items < MAXSIZE) {
        plist->entries[plist->items] = item;
        (plist->items)++;
        return true;
    } else {
        return false;
    }
}

void Traverse(const List *plist, void (*pfun)(Item item)) {
    for (int i = 0; i < plist->items; i++)
        (*pfun)(plist->entries[i]);
}

void EmptyTheList(List *plist) {
    plist->items = 0;
}

