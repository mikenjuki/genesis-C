#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Game of craps

int rollDice(void);

int crapsGame()
{

	int sum, gameStatus, playerPoint;

	srand(time(NULL));
	sum = rollDice();

	switch (sum)
	{
	case 7:
	case 11:
		gameStatus = 1;
		break;
	case 2:
	case 3:
	case 12:
		gameStatus = 2;
		break;
	default:
		gameStatus = 0;
		playerPoint = sum;
		printf("Point is %d.\n", playerPoint);
		break;
	}

	while (gameStatus == 0)
	{
		sum = rollDice();

		if (sum == playerPoint)
			gameStatus = 1;
		else
			if (sum == 7)
				gameStatus = 2;

	}

	if (gameStatus == 1)
	{
		printf("\nPlayer won.");
	}
	else {
		printf("Craps! House wins.\n");
	}

	return 0;
}

//we get the sum of the faces rolled here
int rollDice(void)
{
	int num1, num2, dieSum;

	num1 = 1 + (rand() % 6);
	num2 = 1 + (rand() % 6);

	dieSum = num1 + num2;

	printf("\nThe sum computed was: %d\n", dieSum);
	return dieSum;
}