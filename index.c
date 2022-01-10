// Write a program to check whether the given number is odd or even in C language

#include <stdio.h>

int main()
{
    int input_number;

    printf("Enter the Number to check: ");
    scanf("%d", &input_number);

    // even number is that number which can be divided by 2.
    if (input_number % 2 == 0)
    {
        printf("%d is an even number", input_number);
    }
    else
    {
        printf("%d is an odd number", input_number);
    }

    return 0;
}