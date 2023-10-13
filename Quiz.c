#include <stdio.h>


int isPalindrome(int);

int QuizPrograms()
{
	printf("\nFrom QuizPrograms!\n");
	//Int palindrome checker

    int num;

    printf("Enter a number: ");
    scanf_s("%d", &num);

    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

	return 0;
}


int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;

    // Reverse the number
    while (num > 0) {
        int remainder = num % 10;
        printf("remainder is: %d \n", remainder);
        reversedNum = reversedNum * 10 + remainder;
        printf("reversedNum is: %d \n", reversedNum);
        num /= 10;
        printf("Num is: %d \n", num);
    }

    // Check if the number is a palindrome
    return originalNum == reversedNum;
}
