#include "stdafx.h"
#include "SLL.h"


SLL::SLL()
{
	pHead = nullptr;
}

SLL::SLL(int data)
{
	pHead = nullptr;
	this->addSLL(data);
}


SLL::~SLL()
{
	//Could not delete here, exceptions where thrown
	// TODO: emptySLL() here
}


void SLL::showSLL()
{
	const node_t *pNext = pHead;

	if (pHead == nullptr)
	{
		printf("SLL is empty\n");
	}
	else
	{
		while (pNext != nullptr)
		{
			printf("Node %p:  Data = %d  pNext = %p\n",
				pNext, pNext->data, pNext->pNextNode);
			pNext = pNext->pNextNode;
		}
	}
}

/* Returns the size of the SLL (equals the number of nodes) */
size_t  SLL::sizeSLL()
{
	const node_t *pNext = pHead;
	size_t size = 0;

	if (pHead != nullptr)
	{
		while (pNext != nullptr)
		{
			pNext = pNext->pNextNode;
			size++;
		}
	}
	return size;
}

/* Empties the SLL */
void  SLL::emptySLL()
{
	node_t **ppHead = &pHead;
	node_t *pToBeRemoved = *ppHead;
	node_t *pNext = nullptr;

	while (pToBeRemoved != nullptr)
	{
		pNext = pToBeRemoved->pNextNode;
		delete pToBeRemoved;
		pToBeRemoved = pNext;
	}
	*ppHead = nullptr;
}

/* Adds data to a new node at the end of the SLL */
void SLL::addSLL(int data)
{
	node_t **ppHead = &pHead;
	node_t *pNext = *ppHead;
	node_t *pNew = new node_t;

	/* Check if allocation has succeeded */
	if (pNew != nullptr)
	{
		pNew->data = data;
		pNew->pNextNode = nullptr;
	}
	if (pNext != nullptr)
	{
		/* Traverse through every subsequent node in the SLL */
		while (pNext->pNextNode != nullptr)
		{
			pNext = pNext->pNextNode;
		}
		pNext->pNextNode = pNew;
	}
	else
	{
		*ppHead = pNew;
	}
}

int SLL::getData(int place) {
	int currentPlace = 0;
	const node_t *pNext = pHead;
	
	if (pHead != nullptr)
	{
		while (pNext != nullptr)
		{
			if (currentPlace == place) {
				return pNext->data;
			}


			pNext = pNext->pNextNode;
			currentPlace++;
		}
	}
}