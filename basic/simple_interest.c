// /Simple Interest = (Principal Amount * Rate of Interest * Time) / 100.


#include <stdio.h>

int main()
{
    float simple_interest, principal_amount, interest, time;
    
    printf("Enter principal amount: ");
    scanf("%f",&principal_amount);

    printf("Enter interest: ");
    scanf("%f",&interest);

    printf("Enter time: ");
    scanf("%f",&time);

    simple_interest = (principal_amount * interest * time) / 100.0f;

    printf("Simple Interest = %f\n",simple_interest);

    return 0;
}