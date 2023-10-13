#include <stdio.h>

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	//loop from 1 - 10
	//print those numbers side by side on same line
	// 3 space between each

	for (int i = 1; i <= 10; i++)
	{
		printf("%3d", i);
	}
	return 0;
}