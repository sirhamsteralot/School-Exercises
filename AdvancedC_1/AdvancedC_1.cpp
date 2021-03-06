// AdvancedC_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void hexdumpLong(long data);
void average2D(double *pD1, double *pD2);
void averageDdata(double data[], int size);

int main()
{
	hexdumpLong(2000);

	double d1 = 2.0;
	double d2 = 3.0;
	average2D(&d1, &d2);
	printf(" d1 = %lf	d2 = %lf\n", d1,d2);


	double sensorData[4] = { 1.0,2.0,3.0,4.0 };
	averageDdata(sensorData, 4);

	for (int i = 0; i < 4; i++) {
		printf(" %lf ", sensorData[i]);
	}

    return 0;
}

void hexdumpLong(long data) {
	printf("%x\n", data);
}

void average2D(double *pD1, double *pD2) {
	double average = (*pD1 + *pD2) / 2;
	*pD1 = average;
	*pD2 = average;
}

void averageDdata(double data[], int size) {
	double average = 0;

	for (int i = 0; i < size; i++) {
		average += data[i];
	}

	average /= size;

	for (int i = 0; i < size; i++) {
		data[i] = average;
	}
}