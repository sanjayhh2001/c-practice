/*
Implement a function to  find the sum of two numbers
Enter num1 and num2 : 10 2

Sum of two numbers is 12
*/


#include <stdio.h>

void sum_of_two(int a,int b);

void sum_of_two(int a,int b)
{
    printf("Sum of two numbers is %d\n",a+b);
}

int main()
{
    int num1,num2;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    sum_of_two(num1,num2);

    return 0;
}