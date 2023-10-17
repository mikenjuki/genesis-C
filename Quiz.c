#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	
	int i, sum = 0, x, y;

	printf("\nEnter number of integers you want to sum: ");
	scanf_s("%d", &x);
	for (i = 1; i <= x; i++)
	{
		
		printf("\nEnter a number: ");
		scanf_s("%d", &y);
		sum += y;
	}
	printf("The sum of the %d numbers you entered is: %d\n", x, sum);

	return 0;
}

//for (j = 1; j <= i; j++)
//printf(" %c", '@');
