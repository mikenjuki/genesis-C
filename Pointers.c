#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

//void charToUppper(char*);
//void printCharacters(const char*);
//int copyStr(char*);

int Pointers()
{

	/*char string[100];
	printf("Enter a sentence: ");
	fgets(string, sizeof(string), stdin);

	if (strlen(string) < 5)
	{
		printf("Sentence too short!");
		return 1;
	}

	printf("\nThe original string is: %s", string);
	charToUppper(string);
	printf("\nThe new string is: %s", string);
	printCharacters(string);

	copyStr(string);*/

	int x, y;

	int *const IntPtr = &x;
	*IntPtr = 7;
	

	return 0;
}

//void charToUppper(char* strPtr)
//{
//	while (*strPtr != '\0')
//	{
//		if (islower(*strPtr))
//			*strPtr = toupper(*strPtr);
//
//		++strPtr;
//	}
//
//	printf("\n\nPointer address is %p\n", &strPtr);
//
//}

//
//void printCharacters(const char* strPtr)
//{
//
//	for (; *strPtr != '\0'; strPtr++)
//	{
//
//		printf("\n%c\n", *strPtr);
//	}
//
//}

//int copyStr(char* string)
//{
//	char* string2 = malloc(strlen(string) + 1);
//
//	if (string2 == NULL) {
//		// Handle memory allocation failure
//		printf("Memory allocation failed\n");
//		return 2;
//	}
//
//
//	for (int i = 0; i < strlen(string) + 1; i++)
//		string2[i] = string[i];
//
//
//
//	if (strlen(string2) == 0)
//	{
//		printf("You need to enter something.");
//		return 1;
//	}
//
//	string2[0] = tolower(string2[0]);
//
//	printf("Copied string: %s\n", string2);
//
//	free(string2);
//	return 0;
//}