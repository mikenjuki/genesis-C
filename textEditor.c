#include <stdio.h>
#include <string.h>

int enterChoice();
void createFile();
void updateFile();
void deleteFile();
void readNote();

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
        case 4:
            readNote();
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
    char* choices[] = {
       "1 - Create a new file.",
       "2 - Update existing file.",
       "3 - Delete a file.",
       "4 - Read a note."
    };

	int userChoice;

    printf("\nPick an option from below or enter 0 to quit program.\n");
    for (int i = 0; i < sizeof(choices) / sizeof(choices[0]); ++i) {
        printf("%s\n", choices[i]);
    }
	scanf_s("%d", &userChoice);

	return userChoice;
}

//should create a file and let you write notes into it.
void createFile()
{
    printf("Creating file...\n");

    struct Note one_note = {0, ""};

    char fileName[50];
    char newCh;

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
        newCh = getchar(); // Clear the newline character left in the buffer
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

void readNote()
{
    char fileName[50];
    int note_id;

    printf("from read note.\n");

    printf("\nEnter the name of the text file to read a note from: ");
    scanf_s("%s", fileName, (unsigned)sizeof(fileName));

    strcat_s(fileName, sizeof(fileName), ".txt");

    FILE* fPtr;

    if (fopen_s(&fPtr, fileName, "r") != 0) {
        printf("ERR: File could not be opened.\n");
        return;
    }

    printf("\nEnter noteID for the note you want to read: ");
    scanf_s("%d", &note_id);

    struct Note one_note;

    while (fread(&one_note, sizeof(struct Note), 1, fPtr) == 1) {
        if (one_note.noteID == note_id) {
            printf("Note ID: %d\n", one_note.noteID);
            printf("Note Content: %s\n", one_note.note);
            break;
        }
    }

    /*if (fread(&one_note, sizeof(struct Note), 1, fPtr) == 0) {
        printf("ERR: Error reading note from file.\n");
        fclose(fPtr);
        return;
    }*/

    fclose(fPtr);
}