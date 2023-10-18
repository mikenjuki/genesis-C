#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubbleSort( int[], int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int sortArray[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

	printf("\nBefore sorting: %d %p", sortArray[0], &sortArray);
	for (int i = 0; i < SIZE ; i++)
	{
		printf("\n%3d", sortArray[i]);
	}

	bubbleSort(sortArray, SIZE);

	printf("\nAfter sorting: %d %p\n", sortArray[0], &sortArray[0]);
	for (int i = 0; i < SIZE ; i++)
	{
		printf("\n%3d", sortArray[i]);
	}

	return 0;
   }

void bubbleSort(int sortArray[], int size)
{
	int j, pass, hold;

	for ( j = 0; j <= size - 1; j++)
	{
		for (pass = 1; pass < size - 1 - j; pass++)
		{
			if (sortArray[pass] > sortArray[pass + 1])
			{
				hold = sortArray[pass];
				sortArray[pass] = sortArray[pass + 1];
				sortArray[pass + 1] = hold;
			}
		}

	}
	
}

void sortColors(int* nums, int numsSize) {
	int i, pass, hold;

	for (i = 0; i <= numsSize - 1; i++)
	{
		for (pass = 0; pass < numsSize - 1 - i; pass++)
		{
			if (nums[pass] > nums[pass + 1])
			{
				hold = nums[pass];
				nums[pass] = nums[pass + 1];
				nums[pass + 1] = hold;
			}
		}
	}
}