#include <stdio.h>

void Circumference()
{
	const double PI = 3.14159;
	double radius;
	double circumference;
	double area;
	int scanfR;

	printf("\nEnter radius as a number: ");
	scanfR = scanf_s("%lf", &radius);

	if (scanfR != 1)
	{
		printf("\nEnter a number please!\n");
		return 0;
	}

	circumference = 2 * PI * radius;
	area = PI * radius * radius;

	printf("\nCircumference is: %lf\n", circumference);
	printf("Area of the circle is: %lf\n", area);
}