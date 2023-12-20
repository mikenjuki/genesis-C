//#define _CRT_SECURE_NO_WARNINGS_GLOBALS 

#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int checkDate();
void feofTest();
void creditData();

int FileProcessing()
{
	printf("\nFrom File Processing\n");

	/*int account;
	char name[30];
	double balance;
	FILE* cfPtr;

	if (fopen_s(&cfPtr, "clientFile.dat", "a") != 0) {
		printf("File could not be opened\n");
		return -1;
	}
	else {
		printf("Enter the account number, name, and balance.\n");
		printf("Enter 'exit' to complete input.\n");
		

		while (1) {
			printf("- ");
			int result = scanf_s("%d%s%lf", &account, name, (unsigned)sizeof(name), &balance);

			//if (result == EOF || result < 3) {
			//	printf("Invalid input format or EOF reached.\n");
			//	break;
			//}

			if (result == EOF) {
				printf("EOF reached.\n");
				break;
			}

			if (result < 3) {
				printf("Invalid input format.\n");
				break;
			}

			if (strcmp(name, "exit") == 0) {
				printf("Terminating input.\n");
				break;
			}

			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
		} 

		fclose(cfPtr);
	}
	*/

	// feofTest();
	creditData();
		
	return 0;
}

int checkDate() {
	time_t currentTime;
	struct tm localTime;

	currentTime = time(NULL);

	// localtime_s returns zero on success, non-zero on error
	if (localtime_s(&localTime, &currentTime) != 0) {
		printf("Error in getting local time\n");
		return -1;
	}

	char timeString[26];

	// Convert localTime to a string
	if (asctime_s(timeString, sizeof(timeString), &localTime) == 0) {
		printf("Current Date and Time: %s", timeString);
	}
	else {
		printf("Error in formatting date and time\n");
		return -1;
	}

	return 0;
}


void feofTest()
{
	printf("From FEOF Test \n");

	FILE* fPtr;
	int c;

	if (fopen_s(&fPtr, "fTest.txt", "r") != 0)
	{
		printf("ERR: Could not open file\n");
		return 1;
	}
	/*else {
		fprintf(fPtr, "%s", "This is a test\n to print out characters.\n");
	}*/

	while (true)
	{
		c = fgetc(fPtr);

		if (feof(fPtr)) break;

		printf("%c", c);
	}
	 
	fclose(fPtr);
}

void creditData()
{
	printf("From credit data func");

}

