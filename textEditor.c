#include <stdio.h>

int enterChoice();
void createFile();
void updateFile();
void deleteFile();

int TextEditor()
{
	printf("From Text Editor.\n");

    int choice;

    do {
        choice = enterChoice();

        switch (choice) {
        case 1:
           createFile();
            break;
        case 2:
            updateFile();
            break;
        case 3:
            deleteFile();
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
            break;
        }

    } while (choice != 1 && choice != 2 && choice != 3 && choice != 0);


	//printf("you entered: %d", userChoice);

	return 0;
}

int enterChoice()
{
	//user choices
	char* choice1 = { "1 - Create a new file." };
	char* choice2 = { "2 - Update existing file." };
	char* choice3 = { "3 - Delete a file." };

	int userChoice;

	printf("\nPick an option from below or enter 0 to quit program.\n%s\v%s\v%s\v\n", choice1, choice2, choice3);
	scanf_s("%d", &userChoice);

	return userChoice;
}

void createFile()
{
    printf("from create file.\n");
}

void updateFile()
{
    printf("from update file.\n");
}

void deleteFile()
{
    printf("from delete file.\n");
}