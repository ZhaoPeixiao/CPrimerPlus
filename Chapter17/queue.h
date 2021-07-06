//
// Created by Peixiao on 2021/7/6.
//

#ifndef CHAPTER17_QUEUE_H
#define CHAPTER17_QUEUE_H

#include <stdbool.h>

typedef struct item {
    long arrive; /* the time when a customer joins the queue */
    int processtime; /* the number of consultation minutes desired */
} Item;

#define MAXQUEUE 10

typedef struct node {
    Item item;
    struct node * next;
} Node;

typedef struct queue {
    Node * front;
    Node * rear;
    int items;
} Queue;

void InitializeQueue(Queue * pq);

bool QueueIsFull(const Queue * pq);

bool QueueIsEmpty(const Queue *pq);

int QueueItemCount(const Queue * pq);

bool EnQueue(Item item, Queue * pq);

bool DeQueue(Item *pitem, Queue * pq);

void EmptyTheQueue(Queue * pq);

#endif //CHAPTER17_QUEUE_H
