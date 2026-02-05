// Take a character input from the user and print its ASCII value.

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character to prints its ASCII value: ");
    scanf(" %c",&ch);

    printf("The ASCII value is: %d\n",ch);

    return 0;
}