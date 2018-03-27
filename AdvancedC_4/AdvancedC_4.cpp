// AdvancedC_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <complex.h>
#include <stdio.h>


int main()
{
	double complex z1 = -3.0 - 1.0*I;
	double complex z2 = 5 - 2.0*I;
	double result1 = z1 * z2;

	printf("%f + i%f\n", creal(result1), cimag(result1));

	double complex z3 = 1 - 1.0*I;
	double complex z4 = 5 - 2.0*I;
	double result2 = z3 / z4;

	printf("%f + i%f\n", creal(result2), cimag(result2));

    return 0;
}

