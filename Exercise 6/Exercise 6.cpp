// Exercise 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SLL.h"


/* Singly Linked List: SLL */

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>

int main(void)
{
	SLL linkedList;

	linkedList.showSLL();
	printf("Size of the SLL = %lu\n", linkedList.sizeSLL());

	printf("\nAdd new node to the SLL\n");
	linkedList.addSLL(10);
	linkedList.showSLL();
	printf("Size of the SLL = %lu\n\n", linkedList.sizeSLL());

	printf("Add new node to the SLL\n");
	linkedList.addSLL(20);
	linkedList.showSLL();
	printf("Size of the SLL = %lu\n\n", linkedList.sizeSLL());

	printf("Delete the SLL (clear the contents):\n");
	linkedList.emptySLL();
	linkedList.showSLL();
	printf("Size of the SLL = %lu\n\n", linkedList.sizeSLL());

	std::vector<SLL> vectorOfLinkedList;

	SLL one(10);
	SLL two(20);
	SLL empty;

	vectorOfLinkedList.push_back(one);
	vectorOfLinkedList.push_back(two);
	vectorOfLinkedList.push_back(empty);

	for (int i = 0; i < vectorOfLinkedList[0].sizeSLL(); i++) {
		for (int t = 0; t < vectorOfLinkedList[1].sizeSLL(); t++) {
			vectorOfLinkedList[2].addSLL( vectorOfLinkedList[0].getData(i) * vectorOfLinkedList[1].getData(t));
		}
	}

	vectorOfLinkedList[2].showSLL();

	return 0;
}

