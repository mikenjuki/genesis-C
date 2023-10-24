#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 5

void calculateCharges(float [SIZE], float[SIZE], int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");

	//enter number of hours parked for cars get print out
	// enter as many customer hours and print out when you reach end
	// enter numbers to array
	// then loop over array and call calculateCharges and printout collective receipt

	int count = 0, i;
	float clientHours;
	float hoursArray[SIZE];
	float amountArray[SIZE];

	printf("\nCar Park Program");

	do
	{
		printf("\nEnter car %d hours: ", count + 1);

	
		if (scanf_s("%f", &clientHours) != 1) {
			printf("Invalid input. Please enter a valid number.\n");
		
		}
		else {
			hoursArray[count] = clientHours;
			count++;
		}

	} while (count < SIZE);

	calculateCharges(hoursArray, amountArray, SIZE);

	printf("\n%s%15s%15s\n", "Car", "Hours", "Charge");

	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d%15.1f%14.2f\n", i + 1, hoursArray[i], amountArray[i]);
	}

	// printf("Here: %f", ceil(3.3));
	
	return 0;
   }

void calculateCharges(float hours[SIZE], float amount[SIZE], int size)
{
	int count = 0, x;

	for (int i = 0; i < size; i++)
	{
		if (hours[i] <= 3)
		{
			amount[i] = 2;
		}
		else if (hours[i] > 3 && hours[i] < 24)
		{
			printf("\nNumber is %f", hours[i]);
			x = ceil(hours[i]);
			amount[i] = 2 + (x - 3) * 0.5;
			printf("\nAmount is %f", amount[i]);
		}
		else if (hours[i] == 24)
		{
			amount[i] = 10;
		}

	}

}
