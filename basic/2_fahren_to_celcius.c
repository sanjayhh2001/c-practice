// celsius = (fahrenheit - 32) * 5/9
// Write a program that takes a temperature in Fahrenheit as input and converts it to Celsius using the formula: 

#include <stdio.h>

int main()
{
    int Fahrenheit; 
    float celsius;

    printf("Enter the temperature in Fahrenheit: ");
    scanf("%d",&Fahrenheit);

    celsius = (Fahrenheit-32.0f) * 5.0f/9.0f;
    
    printf("celsius = %f",celsius);
    
    return 0;
}