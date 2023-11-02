#include <stdio.h>
#include <ctype.h>

void charToUppper(char *);

int Pointers()
{
	char string[] = "characters and $32.98";

	printf("\nThe original string is: %s", string);
	charToUppper(string);
	printf("\nThe new string is: %s", string);

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

	printf("\n\nPointer address is %p", &strPtr );
	
}
