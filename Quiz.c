#include <stdio.h>
#include <stdlib.h>

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int questions = 10, i, correctAnswers = 0;

	printf("\nLets practice multiplication on a set of 10");
	for (i = 1; i <= questions; i++)
	{
		int num1 = 1 + rand() % 9;
		int num2 = 1 + rand() % 9;
		int correctAns = num1 * num2;

		printf("\nQuestion %d: What is %d times %d? ", i, num1, num2);
		int userAns;
		scanf_s("%d", &userAns);

		if (userAns == -1) {
			printf("Terminating the program.\n");
			break;
		}


		if (userAns == correctAns)
		{
			printf("\nCorrect");
			correctAnswers++;
		}
		else
		{
			printf("\nWrong! Try again.");
			while (userAns != correctAns)
			{
				printf("\nQuestion %d: What is %d times %d? ", i, num1, num2);
				scanf_s("%d", &userAns);
			}
		}

	}

	printf("You answered %d out of %d questions correctly.\n", correctAnswers, questions);

	return 0;
}


