#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void callByRef(int *);

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");

	int number = 5;
	int *numPtr;
	numPtr = &number;

	printf("\nThe original value of number is: %d", number);
	printf("\nValue from pointer: %d", *numPtr);
	callByRef(&number);
	printf("\nThe new value of number is: %d", number);

	return 0;
}

void callByRef(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
