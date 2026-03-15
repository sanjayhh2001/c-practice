/*
Problem Statement:
WAP to Print direction based on input char (N/S/E/W/n/s/e/w)

Sample Execution 1:

Enter direction: N
North
Sample Execution 2:

Enter direction: W
West
Sample Execution 3:
Enter direction: X
Invalid input
*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter direction: ");
    scanf(" %c",&ch);

    switch (ch)
    {
    case 'N':
    case 'n':
        printf("North\n");
        break;
    case 'S':
    case 's':
        printf("South\n");
        break;    
    case 'E':
    case 'e':
        printf("East\n");
        break;
    case 'W':
    case 'w':
        printf("West\n");
        break;    
    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}