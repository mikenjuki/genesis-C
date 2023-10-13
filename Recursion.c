#include <stdio.h>

long factorial(long);
int Recursion()
{
	printf("\nFrom recursion");
	int i, userInput;

	printf("\nEnter a number you want a factorial of: ");
	scanf_s("%d", &userInput);



	for (i = 1; i <= userInput; i++)
		printf("\n%3d! = %ld", i, factorial(i));


	return 0;
}

long factorial(long number)
{
	if (number <=1)
	{
		return 1;
	}
	else
	{
		return number * (factorial(number - 1));
	}
}