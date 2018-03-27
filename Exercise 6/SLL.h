#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"


typedef struct node
{
	int data;
	struct node *pNextNode;
} node_t;

class SLL
{
public:
	SLL();
	SLL(int);
	~SLL();

	void showSLL();
	size_t sizeSLL();
	void addSLL(int);
	void emptySLL();
	int getData(int);
private:

	node_t *pHead;
};

