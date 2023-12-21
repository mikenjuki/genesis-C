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


//void feofTest()
//{
//	printf("From FEOF Test \n");
//
//	FILE* fPtr;
//	int c;
//
//	if (fopen_s(&fPtr, "fTest.txt", "r") != 0)
//	{
//		printf("ERR: Could not open file\n");
//		return 1;
//	}
//	/*else {
//		fprintf(fPtr, "%s", "This is a test\n to print out characters.\n");
//	}*/
//
//	while (true)
//	{
//		c = fgetc(fPtr);
//
//		if (feof(fPtr)) break;
//
//		printf("%c", c);
//	}
//	 
//	fclose(fPtr);
//}

void creditData()
{
	printf("From credit data func\n");

	//the struct
	typedef struct {
		int acctNum;
		char lastName[20];
		char firstName[20];
		double balance;
	} CreditClient;

	int position;
	CreditClient client = {0, "", "", 0.0};
	FILE *cdfPtr;

	// create and write data
	if (fopen_s(&cdfPtr, "credit.txt", "r+") != 0)
	{
		printf("ERR: File could not be opened.");
	}
	else {
		printf("Enter Account number: (between 1 - 100). To end enter 0.\n");
		scanf_s("%d", &client.acctNum);

		while (client.acctNum != 0)
		{	
			if (client.acctNum > 100) {
				printf("Account number should be between 1 - 100. Please re-enter.\n");
				continue;
			}

			printf("Enter lastname, firstname, balance.\n");
			fscanf_s(stdin, "%s%s%lf", client.lastName, (unsigned)sizeof(client.lastName), client.firstName, (unsigned)sizeof(client.firstName), &client.balance);


			position = (client.acctNum - 1) * sizeof(CreditClient);
			fseek(cdfPtr, position, SEEK_SET);
			fwrite(&client, sizeof(CreditClient), 1, cdfPtr);


			printf("Enter account number.\n");
			scanf_s("%d", &client.acctNum);
		}

		

		fclose(cdfPtr);
	}

	//read data
	//if (fopen_s(&cdfPtr, "credit.txt", "r") != 0)
	//{
	//	printf("ERR: File could not be opened.");
	//}
	//else {
	//	printf("%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance");

	//	while (!feof(cdfPtr))
	//	{
	//		//if (feof(cdfPtr)) break;
	//		fread(&client, sizeof(CreditClient), 1, cdfPtr);

	//		if (client.acctNum != 0)
	//		{
	//			printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
	//		}
	//	}
	//	fclose(cdfPtr);
	//}

}


// printf("%zu", sizeof(CreditClient));


//!feof(cdfPtr)