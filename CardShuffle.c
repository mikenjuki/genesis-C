#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


typedef struct {
	const char* face;
	const char* suit;
} Card;

void fillDeck(Card * const, const char* [], const char* []);
void shuffle(Card * const);
void deal(const Card* const);

int CardShuffle()
{
	printf("\nFrom shuffle\n");

	Card deck[52];

	const char* face[] = { "Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	const char* suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

	//call this to randomize the selection later on
	srand(time(0));

	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	return 0;
}


void fillDeck(Card * const cDeck, const char* cface[], const char* csuit[])
{
	int i;

	for (i = 0; i <= 51; i++)
	{
		cDeck[i].face = cface[i % 13];
		cDeck[i].suit = csuit[i / 13];
	}
}

void shuffle(Card * const cDeck)
{
	
	int card, row;
	Card temp;

	for (card = 0; card <= 51 ; card++)
	{
			row = rand() % 52;
			temp = cDeck[card];
			cDeck[card] = cDeck[row];
			cDeck[row] = temp;
	}
}



void deal(const Card* const cDeck)
{
	int card;

	for (card = 0; card <= 51; card++)
		printf("%5s of %-8s%c", cDeck[card].face, cDeck[card].suit, (card + 1) % 2 ? '\t' : '\n');
				
}


// deal 5 card poker hand
//void deal(const int cdeck[][FSIZE], const char* cface[], const char* csuit[])
//{
//	int card, row, column;
//	int cardsDealt = 0;
//	bool pairCheck = false;
//	int pairCounter[FSIZE] = { 0 };
//
//	for (card = 1; card <= 5; card++)
//	{
//		for (row = 0; row <= SSIZE - 1 && cardsDealt < 5; row++)
//		{
//			for (column = 0; column <= FSIZE - 1 && cardsDealt < 5; column++)
//			{
//				if (cdeck[row][column] == card)
//				{
//					printf("%d: %5s of %-8s%c", column, cface[column], csuit[row], card % 2 == 0 ? '\n' : '\t');
//					++pairCounter[column]; 
//					++cardsDealt;
//
//					if (pairCounter[column] == 2)
//					{
//						pairCheck = true;
//					}
//				}
//			}
//
//		}
//	}
//
//	if (pairCheck)
//	{
//	  printf("\nA pair was found\n");
//	}
//	
//}


