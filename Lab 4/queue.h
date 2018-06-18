#ifndef QUEUE_H
#define QUEUE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data
{
	char *whatever;//not declaring the memory needed here
}Data;

typedef struct queueNode
{
	Data newStuff;
	struct QueueNode *pNext;
}QueueNode;

typedef struct queue
{
	 QueueNode *pHead;
	 QueueNode *pTail;
}Queue;

QueueNode *makeNode(Data newStuff);
int isEmpty(Queue *pQ);
int enqueue(Queue *pQ, Data newItem);
char dequeue(Queue *pQ);


#endif // !QUEUE_H
