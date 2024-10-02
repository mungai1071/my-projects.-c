//simple interest
/*
Authur: John Mungai
Date:29/9/2024
*/


#include <stdio.h>

int main() {
    float principal, time, rate, simple_interest;

    // Accept input from user
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    // Calculate simple interest
    simple_interest = (principal * time * rate) / 100;

    // Display the result
    printf("The simple interest is: %.2f\n", simple_interest);

    return 0;
}
