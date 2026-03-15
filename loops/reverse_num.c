/*
WAP to Reverse a Positive number

Comment the prompting messages printf statements.

Ex: //printf("Enter the number:\n");

Program execution sample:

Sample Output 1:
Enter a number: 1234
Reversed number is 4321
Sample Output 2:
Enter a number: 56789
Reversed number is 98765
Sample Output 3:
Enter a number: 1
Reversed number is 1
Sample Output 4:
Enter a number: 0
Reversed number is 0
Sample Output 5:
Enter a number: -3
Please enter a positive integer
*/


#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    int rem,rev = 0;

    if(num >= 0)
    {
        while(num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }
        
        printf("Reversed number is %d\n",rev);
    }
    else
    {
     printf("Please enter a positive integer\n");
    }

    return 0;
}