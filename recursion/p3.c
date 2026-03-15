#include <stdio.h>

int fact(int a);

int fact(int a)
{
    if(a == 1)
    {
        return 1;
    }
    else
    {
        return a * fact(a - 1);
    }
}

int main()
{
    int n;

    printf("Enter the number to find the factorial: ");
    scanf("%d",&n);

    int result = fact(n);

    printf("Factorial = %d\n", result);

    return 0;
}