/*
You have to read a characer and check it is  upper case, lower case, digit or none.of.above.

Sample Execution : 

Test case 1 : 

Enter the character : A

The character is Upper Case.

Test case 2 :


Enter the character : 5

The character is Digit.

Test case 3 :

Enter the character : !

The character not an alphabet or digit.
*/


#include <stdio.h>

int main()
{
    char ch;

    printf("Enter the character : ");
    scanf(" %c", &ch);

    if(ch >= 'A')
    {
        if(ch <= 'Z')
        {
            printf("Upper Case\n");
        }
        else if(ch >= 'a')
        {
            if(ch <= 'z')
            {
                printf("Lower Case\n");
            }
            else
            {
                printf("Not alphabet or digit\n");
            }
        }
        else
        {
            printf("Not alphabet or digit\n");
        }
    }
    else if(ch >= '0')
    {
        if(ch <= '9')
        {
            printf("Digit\n");
        }
        else
        {
            printf("Not alphabet or digit\n");
        }
    }
    else
    {
        printf("Not alphabet or digit\n");
    }

    return 0;
}