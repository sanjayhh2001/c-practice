#include <stdio.h>

int main()
{
    int age;
    float ticket_price = 100.0;

    printf("Enter the age: ");
    scanf("%d", &age);

    if(age < 5)
    {
        printf("Children under 5 years old get in free!\n");
        printf("Ticket price: Rs. 0.00\n");
    }
    else if(age <= 12)
    {
        printf("Ticket price: Rs. %.2f\n", ticket_price / 2);
    }
    else if(age >= 65)
    {
        printf("Ticket price: Rs. %.2f\n", ticket_price - 20);
    }
    else
    {
        printf("Ticket price: Rs. %.2f\n", ticket_price);
    }

    return 0;
}