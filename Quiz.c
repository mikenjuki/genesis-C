#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 20

int checkDuplicate(int [], int, int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int count = 0, userNum = 0, scanfR, check;
	int numbers[SIZE] = {0};

	do
	{
		printf("\nEnter a number between 10 - 100 (inclusive): ");
		scanfR = scanf_s("%d", &userNum);

		if (scanfR != 1)
		{
			printf("\nExpected a number. Terminating!\n");
			break;
		}	
		
		if (!(userNum >= 10 && userNum <= 100))
		{
			printf("\n %d is not between 10 - 100!\n", userNum);
			break;
		}

		check = checkDuplicate(numbers, SIZE, userNum);

		if (check == 1) {
			printf("%d is a duplicate. Please enter a different number.\n", userNum);
		}
		else {
			numbers[count] = userNum;
			count++;
		}

	} while (count < SIZE);

	return 0;
   }

int checkDuplicate(int array[],int size, int num)
{
	int i;

	for ( i = 0; i < size; i++)
	{
 		if (array[i] == num)
		{
			return 1;
		}

	}
	return 0;
}
