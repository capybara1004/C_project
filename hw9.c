#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int convCase(char str[])
{
	const int diff = 'a' - 'A';
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + diff;
		else if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;
		else
			str[i];
	}
}

int main(void)
{
	char str[100];
	printf("Input> ");
	scanf_s("%s", str, sizeof(str));
	convCase(str);
	printf("Output> %s", str);
	return 0;
}
