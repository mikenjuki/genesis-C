#include <stdio.h>
#include <math.h>

int findMultiple(int, int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	if (findMultiple(5, 10))
	{
		printf("\n 10 is a multiple of 5");
	}
	


	return 0;
}


int findMultiple(int num, int multiple)
{
	int check = multiple % num;

	return (check == 0) ? 1 : 0;
}
