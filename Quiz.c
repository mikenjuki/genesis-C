#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	
	int sum = 0, y;

	printf("\nThis program will sum any numbers. To end and print out sum, enter: 9999\n");
	//scanf_s("%d", &x);


	do
	{
		printf("\nEnter a number: ");
		scanf_s("%d", &y);
		sum += y;

	} while (y != 9999);

	printf("The sum of the numbers you entered is: %d\n", sum);

	return 0;
}

//for (j = 1; j <= i; j++)
//printf(" %c", '@');
