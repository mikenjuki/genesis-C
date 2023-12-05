#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

//void createSentences();
//void pigLatin();

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");
	// srand(time(NULL));

	/*printf("\v\v");
	printf("sentences\n");*/
	// createSentences();

	printf("\v\v");
	printf("Pig Latin\n");
	//pigLatin();

	char z[9] = { '\0' };
	int day, month, year;

	/*printf("\nEnter a string!\n");
	scanf_s("%[^aeiou]", z, (unsigned char)sizeof(z));
	printf("\nThe input was: %s\n", z);*/
	
	printf("\nEnter date as dd-mm-yy: ");
	scanf_s("%d%*c%d%*c%d", &day, &month, &year);
	printf("\nDate is: %d-%d-%d\n", day, month, year);


	return 0;
}

//void createSentences()
//{
//	char* article[] = {"the", "a", "one", "some", "many"};
//	char* noun[] = {"boy", "girl", "dog", "town", "car"};
//	char* verb[] = {"drove", "jumped", "ran", "walked", "skipped"};
//	char* preposition[] = {"to", "from", "over", "under", "on"};
//
//	srand((unsigned int)time(NULL));
//
//	int i, j;
//	for (j = 0; j < 6; j++)
//	{
//		int count = 0;
//		for (i = 0; i < 6; i++)
//		{
//			int word = rand() % 5;
//			switch (count)
//			{
//			case 0:
//				printf("%s\t", article[word]);
//				break;
//			case 1:
//				printf("%s\t", noun[word]);
//				break;
//			case 2:
//				printf("%s\t", verb[word]);
//				break;
//			case 3:
//				printf("%s\t", preposition[word]);
//				break;
//			case 4:
//				printf("%s\t", article[word]);
//				break;
//			case 5:
//				printf("%s\t", noun[word]);
//				break;
//			default:
//				break;
//			}
//		count++;
//		}
//		printf("\n");
//	}
//}


//void pigLatin()
//{
//	void printLatinWord(const char*);
//
//	char* words[] = {"jump", "computer", "drove", "jumped", "girl", "dog", "town" };
//	int size = sizeof(words)/ sizeof(words[0]);
//
//	for (int i = 0; i < size; i++)
//	{
//		char modifiedWord[100];
//		// char firstChar = words[i][0];
//		char firstChar = *(*(words + i));
//	
//
//		
//		if (strlen(words[i]) > 2) {
//			char* remaining = words[i] + 1;
//		
//			strcpy_s(modifiedWord, sizeof(modifiedWord), remaining);
//			strncat_s(modifiedWord, sizeof(modifiedWord), &firstChar, 1);
//			strcat_s(modifiedWord, sizeof(modifiedWord), "ay");
//	
//
//			printLatinWord(modifiedWord);
//		}
//
//
//	}
//
//
//}

//void printLatinWord(const char* modifiedWord) {
//	printf("Pig Latin word: %s\n", modifiedWord);
//}