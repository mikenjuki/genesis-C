//#define _CRT_SECURE_NO_WARNINGS_GLOBALS 

#include <stdio.h>
#include <time.h>

int checkDate();

int FileProcessing()
{
	printf("\nFrom File Processing\n");

	//int account;
	//char name[30];
	//double balance;
	//FILE* cfPtr;

	/*if (fopen_s(&cfPtr, "clientFile.dat", "w") != 0) {
		printf("File could not be opened\n");
		return -1;
	}
	else {
		printf("Enter the account number, name, and balance.\n");
		printf("Enter EOF to complete input.\n");
		printf("? ");

		scanf_s("%d%s%lf", &account, name, (unsigned)sizeof(name), &balance);

		while (!feof(stdin)) {
			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf_s("%d%s%lf", &account, name, (unsigned)sizeof(name), &balance);
		}

		fclose(cfPtr);
	}*/

	checkDate();
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




