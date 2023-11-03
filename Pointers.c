#include <stdio.h>
#include <ctype.h>

void charToUppper(char *);
void printCharacters(char *);

int Pointers()
{
	char string[] = "characters and $32.98";

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
		printf("%c\n", *strPtr);
	}

}
