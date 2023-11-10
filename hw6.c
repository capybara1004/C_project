#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int arr[5];
	int Oddnumber[5];
	int Evennumber[5];
	int odd = 0;
	int even = 0;

	printf("please input five integers:");
	scanf_s("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 != 0) {
			Oddnumber[odd] = arr[i];
			odd++;
		}
		else {
			Evennumber[even] = arr[i];
			even++;
		}
		printf("\n");
	}

	printf("Odd numbers:");
	for (int i = 0; i < odd; i++) {
		printf("%d ", Oddnumber[i]);
	}

	printf("\n");
	printf("Even numbers:");
	for (int i = 0; i < even; i++) {
		printf("%d ", Evennumber[i]);
	}
}
