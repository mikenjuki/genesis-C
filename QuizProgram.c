#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

void createSentences();

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");
	srand(time(NULL));
	
	int c, x, y, z;
	double d, e, f;
	char* ptr;
	char s1[100], s2[100];

	c = toupper(77);

	
	printf("\v\v");
	printf("%s\n%s%s\n", "isDigit check", isdigit(c) ? "c is a" : "c is not a", "digit");

	printf("\v\v");
	char* str = "-12345678";
	char* endPtr;

	x = strtol(str, &endPtr, 10);
	printf("New long is: %ld \n", (long)x);

	printf("\v\v");
	int i = 0;
	/*puts("Type something: ");
	while ((y = getchar()) != '\n')
		s1[i++] = y;

	s1[i] = '\0';
	puts("You entered: ");
	puts(s1);

	memmove(s2, s1, strlen(s1) + 1);
	puts("Value in s2: ");
	puts(s2);*/

	printf("\v\v");
	printf("sentences\n");
	createSentences();

	return 0;
}

void createSentences()
{
	char* article[] = {"the", "a", "one", "some", "many"};
	char* noun[] = {"boy", "girl", "dog", "town", "car"};
	char* verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
	char* preposition[] = {"to", "from", "over", "under", "on"};

	srand((unsigned int)time(NULL));

	int i, j;
	for (j = 0; j < 6; j++)
	{
		int count = 0;
		for (i = 0; i < 6; i++)
		{
			int word = rand() % 5;
			switch (count)
			{
			case 0:
				printf("%s\t", article[word]);
				break;
			case 1:
				printf("%s\t", noun[word]);
				break;
			case 2:
				printf("%s\t", verb[word]);
				break;
			case 3:
				printf("%s\t", preposition[word]);
				break;
			case 4:
				printf("%s\t", article[word]);
				break;
			case 5:
				printf("%s\t", noun[word]);
				break;
			default:
				break;
			}
		count++;
		}
		printf("\n");
	}
}
