#include <stdio.h>

typedef struct
{
	char* firstName;
	char* lastName;
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

	
	printf("%s\n");
	

	return 0;
}