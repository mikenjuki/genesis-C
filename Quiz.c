#include <stdio.h>
#include <math.h>

int integerPower(int, int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	int y;
	double x;

	printf("\nEnter an integer: ");
	scanf_s("%lf", &x);

	y = floor(x + 0.5);


	printf("%3.2lf, %2d", x, y);

	return 0;
}


int integerPower(int base, int exponent)
{
	int ans = 1;


	for (int i = 0; i < exponent; i++)
	{
		ans *= base;

	}

	return ans;
}
