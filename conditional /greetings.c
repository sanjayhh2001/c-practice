/*
Write a C program to print greetings based on time

Instructions:


The program prompts the user to enter hour (0-23).
It then reads the input number using scanf.
The program greets them based on the time using the "if-else if" statement.
Determine the corresponding greets based on the following ranges         
Good morning    :  5 - 11     
Good  afternoon : 12 - 15
Good evening     : 16 - 21
Good night         :  22 - 4
Invalid hour       :   greater than 23
Program execution sample:

Sample Output 1:
Enter the hour (0-23): 7
Good morning!
Sample Output 2:
Enter the hour (0-23): 15
Good afternoon!
Sample Output 3:
Enter the hour (0-23): 20
Good evening!

Sample Output 4:
Enter the hour (0-23): 30
Invalid hour! 

Sample Output 5:
Enter the hour (0-23): 22
Good night!
*/


#include <stdio.h>

int main()
{
    int num;

    printf("The program prompts the user to enter hour (0-23): ");
    scanf("%d",&num);

    if(num >= 0)
    {
        if(num >= 5)
        {
            if(num <= 11)
            {
                printf("Good morning!\n");
            }
            else if(num <= 15)
            {
            printf("Good afternoon!\n");
            }
            else if(num <= 21)
            {
                printf("Good evening!\n");
            }
            else if(num <= 23)
            {
                printf("Good night!\n");
            }
            else
            {
                printf("Invalid hour!\n");
            }
        }
        else
        {
            printf("Good night!\n");
        }
    }
    else
    {
        printf("Invalid hour!\n");
    }

    return 0;
}