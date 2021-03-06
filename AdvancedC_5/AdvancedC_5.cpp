// AdvancedC_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
	int number;
	char twoChars[3];
} zipcode_t;

int compareZipCodes(const void *pZC1, const void *pZC2);

int main()
{
	zipcode_t zipcodeArray[5] = {
		{ 1234, "AB" },
		{ 1234, "AC" },
		{ 1236, "AB" },
		{ 1236, "AC" },
		{ 1238, "AB" },
	};
	for (int i = 0; i < 5; i++) {
		printf("%d %s\n", zipcodeArray[i].number, zipcodeArray[i].twoChars);
	}

	qsort(zipcodeArray, 5, sizeof(zipcode_t), compareZipCodes);

	printf("\n\n\n");

	for (int i = 0; i < 5; i++) {
		printf("%d %s\n", zipcodeArray[i].number, zipcodeArray[i].twoChars);
	}

    return 0;
}

int compareZipCodes(const void *pZC1, const void *pZC2) {
	zipcode_t code1 = *((zipcode_t*)pZC1);
	zipcode_t code2 = *((zipcode_t*)pZC2);

	int letterscompared = strcmp(code1.twoChars, code2.twoChars);
	if (letterscompared == 0) {
		if (code1.number > code2.number)
			return 1;
		else
			return -1;
	}
	else {
		return letterscompared;
	}
}