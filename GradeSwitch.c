#include <stdio.h>

int GradeSwitch()
{
	char grade;


	printf("\nWhat grade did you get: ");
	scanf_s(" %c", &grade, 1);

	switch (grade)
	{
    case 'A':
    case 'a':
        printf("Perfect!\n");
        break;
    case 'B':
    case 'b':
        printf("You did good!\n");
        break;
    case 'C':
    case 'c':
        printf("Average performance!\n");
        break;
    case 'D':
    case 'd':
        printf("At least it's not an E!\n");
        break;
    case 'E':
    case 'e':
        printf("Try to do better!\n");
        break;
    default:
        printf("Invalid!\n");
        break;
    }

	return 0;
}