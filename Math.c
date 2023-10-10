#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int MathProgram()
{
	int num = 9;
	double A = sqrt(num);
	double B = pow(2, num);
	int C = round(3.145);
	int D = ceil(3.4);
	int E = floor(3.99);
	double F = fabs(-200);
	double G = log(3);
	double H = sin(45);
	double I = cos(45);
	double J = tan(45);

	int year;
	double amount, principal = 1000.0, rate = 0.5;

	printf("%4s%21s\n", "Year", "Amount on deposit");

	for (year = 1; year <= 100; year++ )
	{
		amount = principal * pow(1.0 + rate, year);
		/*printf("%4d%21.2f\n", year, amount);*/
	}

	/*printf("%lf\n", I);*/

	//Testing Randomness
	int i;

	for (i = 1; i < 20; i++)
	{
		printf("%10d\n", 1 + (rand() % 6));
	}

	return 0;
}