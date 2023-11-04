#include <stdio.h>
#include <ctype.h>

void charToUppper(char *);
void printCharacters(const char *);

int Pointers()
{
	//char string[] = "characters and $32.98";
	char string[100];
	printf("Enter a sentence: ");
	fgets(string, sizeof(string), stdin);

	printf("\nThe original string is: %s", string);
	charToUppper(string);
	printf("\nThe new string is: %s", string);
	printCharacters(string);

	return 0;
}

void charToUppper(char *strPtr)
{
	while (*strPtr != '\0')
	{
		if (islower(*strPtr))
			*strPtr = toupper(*strPtr);

			++strPtr;
	}

	printf("\n\nPointer address is %p\n", &strPtr );
	
}

void printCharacters(const char *strPtr)
{

	for (; *strPtr != '\0'; strPtr++)
	{
	
		printf("\n%c\n", *strPtr);
	}

}
