#include <stdio.h>

struct card
{
	char* face;
	char* suit;
};

int Structs()
{
	printf("from structs\n");

	struct card a;
	struct card *aPtr;
	
	a.face = "Ace";
	a.suit = "Spades";
	aPtr = &a;

	//access struct instance members in different ways
	printf("\v%s%s%s\n", a.face, " of ", a.suit);
	printf("\v%s%s%s\n", aPtr->face, " of ", aPtr->suit);
	printf("\v%s%s%s\n", (*aPtr).face, " of ", (*aPtr).suit);

	return 0;
}