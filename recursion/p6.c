#include <stdio.h>

int rev = 0;

void reverse(int a)
{
    if(a == 0)
    {
        return;
    }

    int rem = a % 10;
    rev = rev * 10 + rem;

    reverse(a / 10);
}

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    reverse(num);

    printf("Reversed number is %d\n", rev);

    return 0;
}