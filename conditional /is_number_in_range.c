#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if(num > 49)
    {
        if(num < 101)
        {
            printf("%d is in range\n",num);
        }
        else
        {
             printf("%d is not in range\n",num);
        }
    }
    else
    {
        printf("%d is not in range\n",num);
    }
    return 0;
}