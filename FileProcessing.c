#include <stdio.h>

int FileProcessing()
{
	printf("\nFrom File Processing\n");

	int account;
	char name[30];
	double balance;
	FILE* cfPtr;

	if (fopen_s(&cfPtr, "clientFile.txt", "w") != 0) {
		printf("File could not be opened\n");
		return -1;
	}
	else {
		printf("Enter the account number, name, and balance.\n");
		printf("Enter EOF to complete input.\n");
		printf("? ");

		scanf_s("%d %s %lf", &account, &name, (unsigned)sizeof(name), &balance);

		while (scanf_s("%d %s %lf", &account, name, (unsigned)sizeof(name), &balance) == 3) {
			if (strcmp(name, "exit") == 0) {
				break; // Exit loop if user enters 'exit'
			}

			fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
			printf("? ");
			scanf_s("%d %s %lf", &account, (unsigned)sizeof(name), name, (unsigned)sizeof(balance), &balance);
		}

		fclose(cfPtr);
	}


	return 0;
}