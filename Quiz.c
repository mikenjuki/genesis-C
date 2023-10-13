#include <stdio.h>

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");
	//initialize variables
	// use a loop to check the count
	// then compare the previous number to the currently entered number
	// then stop the program when count is 10
	//print out the largest at that point

	//assumptions: user will input only integers and also no characters

	int count = 1;
	int number;
	int largest = 0;

	do
	{
		printf("\nEnter a number: ");
		scanf_s("%d", &number);

		if (number > largest)
			largest = number;
	
		count++;

	} while (count <= 10);

	printf("Largest number of the 10 is: %d", largest);

	return 0;
}