#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 99)
    {
        if(num < 1000)
        {
            printf("3 digit number..\n");
        }
        else
        {
            printf("Not a 3 digit number..\n");
        }
    }
    else
    {
        printf("Not a 3 digit number..\n");
    }

    return 0;
}