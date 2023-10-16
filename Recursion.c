#include <stdio.h>

long factorial(long);
int Recursion()
{
	printf("\nFrom recursion");
	int i, userInput;

	printf("\nEnter a number you want a factorial of: ");
	scanf_s("%d", &userInput);



	for (i = 1; i <= userInput; i++)
		printf("\n%3d! = %ld", i, factorial(i));


	return 0;
}

long factorial(long number)
{
	if (number <=1)
	{
		return 1;
	}
	else
	{
		return number * (factorial(number - 1));
	}
}


//int isPalindrome(int num) {
//	int originalNum = num;
//	int reversedNum = 0;
//
//	// Reverse the number
//	while (num > 0) {
//		int remainder = num % 10;
//		printf("remainder is: %d \n", remainder);
//		printf("reversedNum before is: %d \n", reversedNum);
//		reversedNum = reversedNum * 10 + remainder;
//		printf("reversedNum after is: %d \n", reversedNum);
//		num /= 10;
//		printf("Num is: %d \n", num);
//	}
//
//	// Check if the number is a palindrome
//	return originalNum == reversedNum;
//}



//int num;
//
//printf("Enter a number: ");
//scanf_s("%d", &num);
//
//if (isPalindrome(num))
//printf("%d is a palindrome.\n", num);
//else
//printf("%d is not a palindrome.\n", num);