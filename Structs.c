#include <stdio.h>

typedef struct
{
	char firstName[50];
	char lastName[50];
	float gpa;
} Student;

int Structs()
{
	printf("from structs\n");

	Student student1 = {"Mike", "Smith", 3.5};
	Student student2 = {"John", "Gotti", 2.0};
	Student student3 = {"Sandra", "warsi", 4.0};
	Student student4 = {"Cleo", "Fraphk", 3.5};
	
	Student students[] = { student1, student2, student3, student4};

	size_t stdSize = sizeof(students) / sizeof(students[0]);

	for (int i = 0; i < stdSize; i++)
	{
		printf("\n%s\n", students[i].firstName);
	}
	
	return 0;
}