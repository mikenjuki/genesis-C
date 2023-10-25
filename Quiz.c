#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define SIZE 10

int addNumbers(const int [], int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int x, a[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	x = addNumbers(a, SIZE);
	printf("\nResult is: %d", x);

	return 0;
   }



int addNumbers(const int b[], int p)
{
	if (p == 1)
	{
		return b[0];
	}
	else
	{
		printf("\nNum: %d", p);
		return b[p - 1] + addNumbers(b, p - 1);
	}
}
