#include <stdio.h>
#include <math.h>

int HypotenuseCalc()
{
	double A, B, C;
	int scanfA, scanfB;

	printf("\nThis program calculates the Hypotenuse given 2 sides.\n");

	printf("\nEnter first number, A: ");
	scanfA = scanf_s("%lf", &A);

	printf("\nEnter second number, B: ");
	scanfB = scanf_s("%lf", &B);

	if (scanfA != 1 || scanfB != 1)
	{
		printf("Invalid input(s)! Please enter the correct data types.\n");
		return 1; // Terminate the program with an error code
	}

	//calculate hypotenuse
	C = sqrt((A * A) + (B * B));
	
	printf("\nThe hypotenuse is: %.2f\n", C);

	return 0;
}