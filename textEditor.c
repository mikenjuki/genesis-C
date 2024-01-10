#include <stdio.h>
#include <string.h>

int enterChoice();
void createFile();
void updateFile();
void deleteFile();

//note struct
 struct Note{
    int noteID;
    char note[2500];
};

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

//should create a file and let you write notes into it.
void createFile()
{
    struct Note one_note = {0, ""};

    printf("from create file.\n");

    char fileName[50];

    printf("Pick a name for the file: ");
    scanf_s("%s", fileName, (unsigned)sizeof(fileName));

    strcat_s(fileName, sizeof(fileName), ".txt");

    FILE* fPtr;

    if (fopen_s(&fPtr, fileName, "w+") != 0)
    {
        printf("ERR: File could not be opened.");
    }
    else {
        printf("Enter number for your note from 001 upwards: (used to later access your note).\n");
        scanf_s("%d", &one_note.noteID);

        if (one_note.noteID <= 0) {
            printf("ERR: Note ID needs to be above 0!");
            fclose(fPtr); // Close the file before returning
            return; // Return to terminate the function
        }

        //later use date
        printf("Write your note below. (2500 characters max)\n");
        getchar(); // Clear the newline character left in the buffer
        fgets(one_note.note, sizeof(one_note.note), stdin);

        fwrite(&one_note, sizeof(struct Note), 1, fPtr);
        fclose(fPtr);
    }

}

void updateFile()
{
    printf("from update file.\n");
}

void deleteFile()
{
    printf("from delete file.\n");
}