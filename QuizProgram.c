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
	return 0;
}


