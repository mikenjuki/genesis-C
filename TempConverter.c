#include <stdio.h>
#include <ctype.h>

#define TEMPABSOLUTE 273.15

int TempConverter()
{
	
	char TempSymbol;
	double temperature, number;
	int scanfRA, scanfRB;

	printf("\nEnter temperature symbol. K for kelvin, C for celsius: ");
	scanfRA = scanf_s(" %c", &TempSymbol, 1);


	// Check if TempSymbol is a character
	if (!isalpha(TempSymbol))
	{
		printf("Invalid input for temperature symbol. Please enter a valid character.\n");
		return 1;
	}

	printf("\nEnter temperature. (use numbers): ");
	scanfRB = scanf_s("%lf", &number);

	// Check if number is a valid double
	if (scanfRB != 1)
	{
		printf("Invalid input for temperature. Please enter a valid number.\n");
		return 1;
	}


	if (TempSymbol == 'C' || TempSymbol == 'c')
	{
		temperature = number + TEMPABSOLUTE;
		printf("The temperature is: %.2f degrees kelvin.\n", temperature);
	}
	else if(TempSymbol == 'K' || TempSymbol == 'k')
	{
		temperature = number - TEMPABSOLUTE;
		printf("The temperature is: %.2f degrees celsius.\n", temperature);
	}
	else {
		printf("\nInvalid! Restart program.\n");
	}
	

	return 0;
}