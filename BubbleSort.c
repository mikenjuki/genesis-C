#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void bubbleSort(int *, const int);

int Bubble()
{
	printf("\nFrom Bubble sort!\n");

	int sortArray[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int i;

	printf("\nBefore sorting");
	for ( i = 0; i < SIZE; i++)
		printf("%3d", sortArray[i]);
	

	bubbleSort(sortArray, SIZE);

	printf("\nAfter sorting");
	for (i = 0; i < SIZE; i++)
		printf("%3d", sortArray[i]);

	printf("\n");

	return 0;
}

void bubbleSort(int *array, const int size)
{
	void swap(int *,int *);
	int j, pass;

	for (pass = 0; pass < size - 1; pass++)
		
	{
		for (j = 0; j < size - 1; j++)
			
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
			}
		}
	

	}

}

void swap(int *element1Ptr, int *element2Ptr)
{
	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

//void sortColors(int* nums, int numsSize) {
//	int i, pass, hold;
//
//	for (i = 0; i <= numsSize - 1; i++)
//	{
//		for (pass = 0; pass < numsSize - 1 - i; pass++)
//		{
//			if (nums[pass] > nums[pass + 1])
//			{
//				hold = nums[pass];
//				nums[pass] = nums[pass + 1];
//				nums[pass + 1] = hold;
//			}
//		}
//	}
//}

// Linear search algo

/*
#define SIZE 100

int linearSearch(int[], int, int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int a[SIZE], x, searchKey, element;

	for (x = 0; x < SIZE - 1; x++)
		a[x] = 2 * x;

	// printf("\n%s%8s", "Index", "Value");
	//for (x = 0; x < SIZE - 1; x++)
	//	printf("\n%3d %8d", x, a[x]);


	printf("\nEnter int search key:");
	scanf_s("%d", &searchKey);

	element = linearSearch(a, searchKey, SIZE);

	if (element != -1)
		printf("\nValue found in element: %d", element);
	else
		printf("\nValue not found");

	return 0;
}

int linearSearch(const int array[], int key, int size)
{
	int n;

	for (n = 0; n <= size - 1; ++n)
		if (array[n] == key)
			return n;

	return -1;
}

*/