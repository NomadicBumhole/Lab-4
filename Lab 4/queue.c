#include "queue.h"


QueueNode *makeNode(Data newStuff)
{
	QueueNode *pMem = (QueueNode *)malloc(sizeof(Data));

	if (pMem != NULL)//memory is allocated 
	{
		pMem->pNext = NULL;
		pMem->newStuff.whatever = (char*)malloc(sizeof(char) * (strlen(newStuff.whatever) + 1));
		//declaring the memory here
		strcpy(pMem->newStuff.whatever, newStuff.whatever);
	}

	return pMem;
}

int isEmpty(Queue *pTop)
{
	int success = 0;
	if (pTop->pHead != NULL)
	{
		return success;
	}
	else
	{
		success = 1;
		return success;
	}
}

int enqueue(Queue *pQ, Data newItem)
{
	int success = 0;
	QueueNode *pTemp = makeNode(newItem);
	if (pTemp != NULL)
	{
		if (pQ->pHead == NULL)
		{
			pQ->pHead = pTemp;
			pQ->pTail = pTemp;
		}
		else
		{
			pQ->pTail->pNext = pTemp;
			pQ->pTail = pTemp;
		}
		success = 1;
	}
	return success;
}
char dequeue(Queue *pQ)
{
	int success = 0;
	QueueNode *pTemp = NULL;
	char str[50] = "";
	success = isEmpty(pQ);
	if (success == 0)
	{
		pTemp = pQ->pHead;
		pQ->pHead = pQ->pHead->pNext;
		strcpy(str, pTemp->newStuff.whatever);
		free(pTemp);
	}
	return str;
}