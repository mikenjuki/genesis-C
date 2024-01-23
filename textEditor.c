#include <stdio.h>
#include <string.h>

int enterChoice();
void createFile();
void updateNote();
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
            updateNote();
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
       "2 - Update existing note.",
       "3 - Delete a file.",
       "4 - Read a note."
    };

	int userChoice;

    printf("\nPick an option from below or enter 0 to quit program.\n");
    for (int i = 0; i < sizeof(choices) / sizeof(choices[0]); ++i) {
        printf("%s\n", choices[i]);
    }
    printf("\n");
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
            return; 
        }

        //later use date
        printf("Write your note below. (2500 characters max)\n");
        newCh = getchar(); // Clear the newline character left in the buffer
        fgets(one_note.note, sizeof(one_note.note), stdin);

        fwrite(&one_note, sizeof(struct Note), 1, fPtr);
        fclose(fPtr);
    }

}

void updateNote()
{
    printf("from update note.\n");

    char fileName[50];
    int note_id;
    char new_note[2500];
    char newCh;



    printf("Enter name of text file containing the note to be updated: ");
    fgets(fileName, sizeof(fileName), stdin);
    fileName[strcspn(fileName, "\n")] = '\0';

    strcat_s(fileName, sizeof(fileName), ".txt");

    FILE* fPtr;

    if (fopen_s(&fPtr, fileName, "r+") != 0) {
        printf("ERR: File could not be opened.\n");
        return;
    }

    printf("\nEnter noteID for the note you want to update: ");
    scanf_s("%d", &note_id);

    struct Note one_note;

    while (fread(&one_note, sizeof(struct Note), 1, fPtr) == 1) {
        if (one_note.noteID == note_id) {
            printf("%s%10s", "Note ID", "Note");
            printf("\n%d%18s", one_note.noteID, one_note.note);
            printf("\nEnter new note to update:");

            newCh = getchar();
            fgets(one_note.note, sizeof(one_note.note), stdin);
           /* new_note[strcspn(new_note, "\n")] = '\0';*/

            size_t newlinePosition = strcspn(new_note, "\n");
            if (newlinePosition < sizeof(new_note)) {
                new_note[newlinePosition] = '\0';
            }
            else {
             
                printf("Warning: Note truncated as newline character not found within the array.\n");
            }
            strcpy_s(one_note.note, sizeof(one_note.note), new_note);


            // Move the file pointer to the beginning of the current record
            fpos_t currentPos;
            fgetpos(fPtr, &currentPos);
            fsetpos(fPtr, &currentPos);

            fwrite(&one_note, sizeof(struct Note), 1, fPtr);

            printf("Note updated successfully.\n");

            break;
        }
    }
    printf("Note with ID %d not found in the file.\n", note_id);
    fclose(fPtr);

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

    fclose(fPtr);
}