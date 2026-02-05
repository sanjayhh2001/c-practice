// Take a float input from the user and print the value up to 2 decimal points.

#include <stdio.h>

int main()
{
    float a;

    printf("Enter the float number: ");
    scanf("%f",&a);

    printf("The float value is %.2f",a);
    
    return 0;
}