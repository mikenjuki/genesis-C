#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FSIZE 13
#define SSIZE 4

void shuffle(int [][FSIZE]);
void deal(const int[][FSIZE], const char *[], const char *[]);

int CardShuffle()
{
	printf("\nFrom shuffle\n");

	const char* suit[SSIZE] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	const char* face[FSIZE] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

	int deck[SSIZE][FSIZE] = { 0 };

	//call this to randomize the selection later on
	srand(time(0));

	shuffle(deck);
	deal(deck, face, suit);

	return 0;
}

void shuffle(int cdeck [][FSIZE])
{
	//pick random spot in card array and insert number (1 - 52)
	int card, row, column;
	for (card = 1; card <= 52 ; card++)
	{
		do
		{
			row = rand() % SSIZE;
			column = rand() % FSIZE;
		} while (cdeck[row][column] != 0);

		cdeck[row][column] = card;
	}

}

void deal(const int cdeck [][FSIZE], const char *cface[], const char *csuit[])
{
	int card, row, column;
	for (card = 1; card <= 52; card++)
		for (row = 0; row <= SSIZE - 1; row++)
			for (column = 0; column <= FSIZE - 1; column++)
				if (cdeck[row][column] == card)
					printf("%5s of %-8s%c", cface[column], csuit[row], card % 2 == 0 ? '\n' : '\t');
				

}
