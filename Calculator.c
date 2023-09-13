#include <stdio.h>
#include <ctype.h>

int Calculator()
{
	//initialize variables
	char operator;
	double num1, num2, answer;
	int scanfROperator, scanfRNum1, scanfRNum2;

	//Ask for input and validate
	printf("\nEnter an operator. (+, -, *, or /): ");
	scanfROperator = scanf_s(" %c", &operator, 1);

	//operator validation
	if (scanfROperator != 1 || (operator != '+' && operator != '-' && operator != '*' && operator != '/'))
	{
		printf("Invalid input for operator. Program Terminated!\n");
		return 1; 
	}

	printf("\nEnter first number: ");
	scanfRNum1 = scanf_s("%lf", &num1);

	if (scanfRNum1 != 1)
	{
		printf("Invalid input for the first number. Program Terminated!\n");
		return 1; 
	}

	printf("\nEnter second number: ");
	scanfRNum2 = scanf_s("%lf", &num2);

	if (scanfRNum2 != 1)
	{
		printf("Invalid input for the second number. Program Terminated!\n");
		return 1; 
	}

	// Perform the calculation based on the operator
	switch (operator)
	{
	case '+':
		answer = num1 + num2;
		printf("\nThe result is: %.3lf", answer);
		break;
	case '-':
		answer = num1 - num2;
		printf("\nThe result is: %.3lf", answer);
		break;
	case '*':
		answer = num1 * num2;
		printf("\nThe result is: %.3lf", answer);
		break;
	case '/':
		if (num2 == 0)
		{
			printf("Division by zero is not allowed.\n");
			return 1; // Terminate the program with an error code
		}
		answer = num1 / num2;
		printf("\nThe result is: %.3lf", answer);
		break;
	default:
		printf("\n %c is not valid. Start again.", operator);
		break;
	}

	return 0;
}

