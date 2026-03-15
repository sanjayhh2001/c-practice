// Print numbers from N to 1 using recursion

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
        printf("%d ",a);
        fun(a-1); 
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