#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 1
#define PRODUCT_NUM 5 

int QuizProgram()
{
	printf("\nFrom QuizProgramnnnnns!\n");

	double salesTable[PRODUCT_NUM][SIZE];
	double productTotals[PRODUCT_NUM];


	for (int i = 1; i < SIZE; i++)
	{
		for (int j = 0; j < PRODUCT_NUM; j++)
		{
			printf("\nEnter sales for Person: %d, for productID: %d\n", i + 1, j + 1);
			scanf_s("%lf", &salesTable[i][j]);
		}
	}


	printf("%7s\n", "Sales");
	printf("-----------\n");
	printf("%s\n", "ProductID");

	for (int i = 1; i < SIZE; i++)
	{
		printf("%8d", i + 1);
		for (int j = 0; j < PRODUCT_NUM; j++)
		{
			printf("%20.2lf", salesTable[i][j]);
		}
		printf("\n");
	}

	return 0;
}




