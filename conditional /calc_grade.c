/*
Write a C program that calculates and prints the grade for a given score based on predefined grade ranges.

Instructions:

Prompt the user to enter a numeric score.
Determine the corresponding grade based on the following ranges:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60
Display the calculated grade to the user.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter the score: ");
    scanf("%d",&num);

    if(num <= 60)
    {
        printf("Your grade is F\n");
    }
    else if(num <= 69)
    {
        printf("Your grade is D\n");
    }
    else if(num <= 79)
    {
        printf("Your grade is C\n");
    }
    else if(num <= 89)
    {
        printf("Your grade is B\n");
    }
    else
    {
        printf("Your grade is A\n");
    } 

    return 0;
}