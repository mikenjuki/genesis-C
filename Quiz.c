#include <stdio.h>

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int count = 1;
	float userNum;
	float largest = 0;

	while (count <= 3)
	{
		printf("\nEnter float number: ");
		scanf_s("%f", &userNum);

		if (userNum > largest)
			largest = userNum;

		count++;
	}

	printf("\nLargest num is: %f", largest);

	return 0;
}


