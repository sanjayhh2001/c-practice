// Print numbers from 1 to N using recursion


#include <stdio.h>

void fun(int a);

void fun(int a)
{
    if(a == 0)
    {
        return;
    }
    else
    {
        fun(a-1); 
        printf("%d ",a);
    }
     
}
int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    fun(n);

    return 0;
}