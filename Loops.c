#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int Loops()
{
	/*char name[25];

	printf("\nWhat's your name?: ");
	fgets(name, 25, stdin);
	name[strcspn(name, "\n")] = '\0';

	while (strlen(name) == 0)
	{
		printf("\nEnter your name please: ");
		fgets(name, 25, stdin);
		name[strcspn(name, "\n")] = '\0';
	}

	printf("\nHello %s", name);*/

	/* Using sentinel to terminate*/
	//int num = 0, sum = 0;

	//do
	//{

	//	printf("\n Enter a # above 0: ");


	//} while (num > 0);


	int arr[] = {3, 2, 14, 5, 9};

	// culating the number of elements in the array arr by dividing the total size of the array (in bytes) by the size of a single element (also in bytes)
	int size = sizeof(arr) / sizeof(arr[0]);

	//printf("Array elements: ");
	//for (int i = 0; i < size; i++) {
	//	printf("%d ", arr[i]);
	//}

	if (5 == size)
	{
		printf("True \n");
	}

	return 0;
}