#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 3



int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	
	int table[SIZE][SIZE] = { {1, 8}, {2,4,6}, {5} };
	int x, y;

	printf("\n The array has %d elements.", SIZE * SIZE);

// initialize each elemt in the array with the sum of it's subscripts
	for (x = 0; x < SIZE; x++)
	{
		for (y = 0; y < SIZE; y++)
		{
			table[x][y] += (x + y);
			printf("\n%3d", table[x][y]);
		}

		printf("\n");
	}

	
	return 0;
   }


