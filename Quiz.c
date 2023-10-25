#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SIZE 11



int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int i, first, second, sum, sums[SIZE] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 }, freq[SIZE] = { 0 };

	srand(time(NULL));

	printf("%s%17s\n", "Face", "Frequency");



	for (i = 0; i < 36000; i++)
	{
		first = 1 + rand() % 6;
		second = 1 + rand() % 6;
		sum = first + second;

		if (sum >= 2 && sum <= 12)
		{
			++freq[sum - 2];
		}
	}

	for (i = 0; i < SIZE; i++) {
		printf("%3d%17d\n", sums[i], freq[i]);
	}

	return 0;
}




