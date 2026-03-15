/*
Use if else condition to find largest of two integers.
In this program store the largest value in a variable in the if else block. Don't print the value inside the block.
Print the stored largest value after the if else block
*/

#include <stdio.h>

int main()
{
    int num1,num2,large;

    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    if(num1 >  num2)
    {
        large  = num1;
    }
    else
    {
        large = num2;
    }

    printf("Largest is %d\n",large);

    return 0;
}