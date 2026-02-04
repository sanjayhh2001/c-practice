#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 10, y = 5;
    printf("Addition = %d\n", add(x, y));
    return 0;
}
