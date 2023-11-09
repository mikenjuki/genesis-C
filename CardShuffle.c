#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FSIZE 13
#define SSIZE 4


int CardShuffle()
{
	printf("\nFrom shuffle\n");

	const char* suit[SSIZE] = { "Hearts", "Diamonds", "Clubs", "Spades" };
	const char* face[FSIZE] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

	int deck[SSIZE][FSIZE] = { 0 };

	return 0;
}