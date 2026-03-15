// Find power of a number using recursion (xⁿ)

#include <stdio.h>

int power(int a, int b);

int power(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    else
    {
        return a * power(a, b-1);
    }
}

int main()
{
    int x,n;

    printf("Enter the base value: ");
    scanf("%d",&x);
    printf("Enter power: ");
    scanf("%d",&n);

    int result = power(x,n);

    printf("%d",result);

    return 0;
}