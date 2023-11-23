#include <stdio.h>
#include <string.h>

int QuizProgram()
{
	printf("\nFrom QuizPrograms!\n");
	
	//char c, sentence[80];
	//int i = 0;

	//puts( "Enter a line of text:" );

	//while ((c = getchar()) != '\n' )
	//{

	//	sentence[i++] = c;
	//}

	//	sentence[i] = '\0';
	//	puts( "\nThe line entered was:" );
	//	puts( sentence );
	
	const char* s1 = "Happy New Year";
	const char* s2 = "Happy New Year";
	const char* s3 = "Happy Holidays";

	int s1Len = strlen(s1);
	int s2Len = strlen(s2);
	int s3Len = strlen(s3);

	printf("s1: %d\ns2: %d\ns3: %d", s1Len, s2Len, s3Len);

	int val = strcmp(s1, s3);
	printf("\nval is: %d\n", val);

	int c = 'N';


	printf("\nword is: %s\n", strrchr(s1, c));


	return 0;
}
