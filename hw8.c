#include <stdio.h>
#include <math.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	double num[5];
	double sum = 0.0, m, st = 0.0;

	printf("Enter 5 real numbers: \n");
	for (int i = 0; i < 5; i++)
	{
		scanf(" %lf", &num[i]);
		sum += num[i];
	}
	m = sum / 5;

	for (int i = 0; i < 5; i++)
	{
		st += pow(num[i] - m, 2);
	}
	st = sqrt(st / 5);
	printf("Standard Deviation = %.31f\n", st);

	return 0;
}
