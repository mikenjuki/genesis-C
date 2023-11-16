#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 5

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");

	unsigned int values[SIZE] = {2, 4, 6, 8, 10};

	unsigned int vPtr;
	int i;

	for (i = 0; i < SIZE; i++)
		printf("%5u", values[i]);

	vPtr = values;
	printf("\n%p", (void *)vPtr);


	return 0;
}
