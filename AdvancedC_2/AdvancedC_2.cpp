// AdvancedC_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

bool compareIntArrays(const int arr1[], const int arr2[], int size);

int main()
{
	int data1[4] = { 1, 2, 3, 4 };
	int data2[4] = { 1, 2, 3, 4 };

	bool arraysAreEqual = compareIntArrays(data1, data2, 4);
	printf("Arrays are equal = %s\n", arraysAreEqual ? "true" : "false");

    return 0;
}

bool compareIntArrays(const int arr1[], const int arr2[], int size) {
	bool output = true;
	for (int i = 0; i < size; i++) {
		if (arr1[i] != arr2[i])
			output = false;
	}

	return output;
}
