#include <stdio.h>
#include <string.h>
#include <ctype.h>


int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");
	
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
	puts("Type something: ");
	while ((y = getchar()) != '\n')
		s1[i++] = y;

	s1[i] = '\0';
	puts("You entered: ");
	puts(s1);



	return 0;
}


