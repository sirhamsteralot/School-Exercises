// AdvancedC_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

bool isInt(const char str[]);

int main(int argC, char *argv[])
{
	int total = 0;

	for (int i = 0; i < argC; i++) {
		if (isInt(*(argv + i))) {
			total += atoi(*(argv + i));
		}
	}

	printf("total: %d", total);

    return 0;
}

bool isInt(const char str[]) {
	int i = 0;
	bool isInteger = true;

	bool firstCharPreceded = str[0] != '-' && str[0] != '+';
	if (firstCharPreceded) {
		i = 1;
	}

	while (str[i] != '\0') {
		if (!isdigit(str[i])) {
			isInteger = false;
			break;
		}
		i++;
	}

	return isInteger;
}