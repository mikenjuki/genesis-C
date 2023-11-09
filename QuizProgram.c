#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void copy1(char *, const char *);
void copy2(char *, const char *);

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");

	printf("\nPointers and arrays\n");

	printf("This is a text\twith a tab.\n");

	return 0;
}

void copy1(char *s1, const char *s2)
{
	int i;
	for (i = 0; (s1[i] = s2[i]) != '\0'; i++)
		;
}

void copy2(char *s1, const char *s2)
{
	for ( ; (*s1 = *s2) != '\0'; s1++, s2++)
		;
}
