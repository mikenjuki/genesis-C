#include <stdio.h>
#include <ctype.h>

int SearchFunc()
{
	printf("Before search func\n");

	int numbers[9] = { 8, 74, 9, 2, 1, 3, 63 ,26, 100 };

	int num, scanfR, arrSize;

	printf("Enter a number: ");
	scanfR = scanf_s("%d", &num);

	arrSize = sizeof(numbers) / sizeof(numbers[0]);


	if (scanfR != 1)
	{
		printf("Enter something and it should be a number!");
		return 1;
	}

	for (int i = 0; i < arrSize; i++)
	{
		if (numbers[i] == num)
		{
			printf("\nYour number was at index: %d", i);
			return 0;
		}
		else
		{
			printf("\n Number %d could not be found.", num);
		}
		
	}

	printf("\n End of search.");
	return 0;
}