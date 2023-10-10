#include <stdio.h>
#include <string.h>

void sortArray(int array[], int size)
{

}

int ArrayComp()
{

	int numArr[3][3] = { {2, 8, 7}, {3, 5, 9}, {1, 4, 6} };

	int rows = sizeof(numArr)/sizeof(numArr[0]);
	int columns = sizeof(numArr[0])/sizeof(numArr[0][0]);

	printf("Rows: %d \n", rows);
	printf("Columns: %d\n", columns);

	//loop over our array
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("%d", numArr[i][j]);
		}
		printf("\n");
	}

	// Strings
	char names[][10] = { "Michael", "John", "Angela" };

	int nameArrSize = sizeof(names) / sizeof(names[0]);

	//change a particular array element
	strcpy_s(names[1], sizeof(names[1]), "Kyle");

	for (int i = 0; i < nameArrSize; i++)
	{
		printf("\n%s\n", names[i]);
	}


	//Sorting an array
	int numArray[] = {3, 2, 5, 8, 58, 9, 6, 7, 1};
	int size = sizeof(numArray) / sizeof(numArray[0]);

	//call array sorter
	sortArray(numArray, size);

	return 0;
}