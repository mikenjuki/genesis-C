#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <math.h>

int Loops()
{
	/*char name[25];

	printf("\nWhat's your name?: ");
	fgets(name, 25, stdin);
	name[strcspn(name, "\n")] = '\0';

	while (strlen(name) == 0)
	{
		printf("\nEnter your name please: ");
		fgets(name, 25, stdin);
		name[strcspn(name, "\n")] = '\0';
	}

	printf("\nHello %s", name);*/

	/* Using sentinel to terminate*/
	//int num = 0, sum = 0;

	//do
	//{

	//	printf("\n Enter a # above 0: ");


	//} while (num > 0);


//	int arr[] = {3, 2, 14, 5, 9};

	// culating the number of elements in the array arr by dividing the total size of the array (in bytes) by the size of a single element (also in bytes)
	// int size = sizeof(arr) / sizeof(arr[0]);

	//printf("Array elements: ");
	//for (int i = 0; i < size; i++) {
	//	printf("%d ", arr[i]);
	//}

	//if (5 == size)
	//{
	//	printf("True \n");
	//}

	// Excercise one
	int sum = 0;

	for (int i = 0; i <= 99 ; i++)
	{
		if (i % 2 != 0)
		{
			sum += i;
		}
	}

	printf("\nSum is: %d", sum);

	// Excercise two
	
	double val = 333.546372;
	printf("\nValue: %-15.1lf", val);
	printf("\nValue: %-15.2lf", val);
	printf("\nValue: %-15.3lf", val);
	printf("\nValue: %-15.4lf", val);
	printf("\nValue: %-15.5lf", val);

	// Excercise three
	float num = 2.5;
	double calculation;

	calculation = pow(num, 3);
	printf("\nResult is: %10.2lf", calculation);

	// Excercise four 
	printf("\n");
	//int rows = 7;

	/*	for (int j = 0; j <=rows; j++)
		{
			for (int i = 0; i < j; i++)
			{
				if (j % 2 != 0)
				{
					printf("*");
				
				}
			
			}
			printf("\n");
		}
	*/


	for ( int i = 1; i <= 5;  i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			for (int k = 1; k <= 4; k++)
			
				printf("*");
				printf("\n");
			}
		
		printf("\n");
	}

	return 0;
}