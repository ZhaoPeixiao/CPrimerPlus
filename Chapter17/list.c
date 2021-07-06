//
// Created by Peixiao on 2021/7/6.
//

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

static void CopyToNode(Item item, Node *pnode);

void InitializeList(List *plist) {
    plist->head = NULL;
    plist->end = NULL;
}

bool ListIsEmpty(const List *plist) {
    if (plist->head == NULL) {
        return true;
    } else {
        return false;
    }
}

bool ListIsFull(const List *plist) {
    Node *pt;
    bool full;

    pt = (Node *) malloc(sizeof(Node));
    full = (pt == NULL) ? true : false;
    free(pt);

    return full;
}

unsigned int ListItemCount(const List *plist) {
    unsigned int count = 0;
    Node *pnode = plist->head;

    while (pnode != NULL) {
        ++count;
        pnode = pnode->next;
    }

    return count;
}

bool AddItem(Item item, List *plist) {
    Node *pnew;
    pnew = (Node *) malloc(sizeof(Node));
    if (pnew == NULL) {
        return false;
    }

    CopyToNode(item, pnew);
    pnew->next = NULL;

    if (plist->head == NULL) {
        plist->head = pnew;
    } else {
        plist->end->next = pnew;
    }
    plist->end = pnew;

    return true;
}

void Traverse(const List *plist, void (*pfun)(Item item)) {
    Node *pnode = plist->head;
    while (pnode != NULL) {
        (*pfun)(pnode->item);
        pnode = pnode->next;
    }
}

void EmptyTheList(List *plist) {
    Node *psave, *pnode = plist->head;
    while (pnode != NULL) {
        psave = pnode->next;
        free(pnode);
        pnode = psave;
    }
}

static void CopyToNode(Item item, Node *pnode) {
    pnode->item = item; /* structure copy */
}