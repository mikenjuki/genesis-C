#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int Patterns()
{
	printf("\nFrom Patterns!\n");

	int x = 10, i, j;

	printf("\nThis program prints out patterns.\n");

	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= i; j++)
			printf(" %c", '*');

		printf("\n");
	}

	printf("\n");
	//second pattern
	for (i = x; i >= 0; i--)
	{
		for (j = 1; j <= i; j++)
			printf(" %c", '*');

		printf("\n");
	}

	printf("\n");
	//Third pattern
	int n[SIZE] = { 19, 3, 15,7,11,9,13,5,17,1 };
	printf("\n%s%13s%17s\n", "Element", "Value", "Histogram");
	for (i = 0; i <= SIZE - 1; i++)
	{
		printf("%7d%13d       ", i, n[i]);
		for (j = 1; j <= n[i]; j++)
		{
			printf(" %c", '*');
		}
		printf("\n");
	}

	return 0;
}




