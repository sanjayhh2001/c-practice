// celsius = (fahrenheit - 32) * 5/9

#include <stdio.h>

int main()
{
    float Fahrenheit, celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f",&Fahrenheit);

    celsius = (Fahrenheit-32.0f) * 5.0f/9.0f;
    
    printf("celsius = %f",celsius);
    
    return 0;
}