#include <stdio.h>

#define SIZE 10

//prototypes
void bubble(int [], const int, int (*compare) (int, int));
int ascending(int, int);
int descending(int, int);

int BubblePointer()
{
	int order, counter, array[SIZE] = {89, 5, 41, 52, 1, 6, 23, 10, 8, 37};

	printf("Enter 1 to sort in ascending or 2 to sort in descending order: ");
	scanf_s("%d", &order);

	printf("\nData items in original order.\n");

	for (counter = 0; counter < SIZE; counter++)
		printf("%5d", array[counter]);

	if (order == 1)
	{
		bubble(array, SIZE, ascending);
		printf("\nData items in ascending order.\n");
	}
	else {
		bubble(array, SIZE, descending);
		printf("\nData items in descending order.\n");
	}

	for (counter = 0; counter < SIZE; counter++)
		printf("%5d", array[counter]);
	printf("\n");

	return 0;

}

void bubble(int array[], const int size, int(*compare)(int, int))
{
}

int ascending(int a, int b)
{

	return b < a; //swap if b is less than a
}

int descending(int a, int b)
{
	return b > a; //swap if b is greater than a
}

