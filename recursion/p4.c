// Find sum of first N natural numbers using recursion

#include <stdio.h>

int sum_of_n(int a);

int sum_of_n(int a)
{
    if(a == 1)
    {
        return 1;
    }
    else
    {
        return a + sum_of_n(a-1);
    }
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int result = sum_of_n(num);

    printf("Sum of n natural numbers is %d",result);

    return 0;
}