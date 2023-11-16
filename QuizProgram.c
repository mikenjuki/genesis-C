#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 5

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");

	unsigned int values[SIZE] = {2, 4, 6, 8, 10};

	unsigned int *vPtr;
	int i;

	for (i = 0; i < SIZE; i++)
		printf("%5u", values[i]);

	vPtr = values;
	vPtr = &values[0];
	printf("\nAddress of array values: %p\n", (void *)vPtr);\

	printf("\nArrays printed using pointer/offset notation\n");
	for (i = 0; i < SIZE; i++)
		printf("%5u", *(vPtr + i));

	printf("\npointer/offset notation with array name\n");
	for (i = 0; i < SIZE; i++)
		printf("%5u", *(values + i));

	printf("\nSubscripting the pointer\n");
	for (i = 0; i < SIZE; i++)
		printf("%5u", vPtr[i]);

	printf("\nReferencing: \n");
	printf("%5u", *(vPtr + 3));

	printf("\nsize of unsigned int is:%zu", sizeof(vPtr[1]));

	vPtr = values;

	//vPtr -= 4;

	//000000E30B2FFBC8 + 4 * 4

	printf("\n%p", vPtr);

	return 0;
}
