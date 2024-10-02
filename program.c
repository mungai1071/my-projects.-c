/*
a program to calculate the loan to be given by 
the bank and the qualificatioons that must be met
Author: John Mungai
Date:29/09/2024
*/


#include <stdio.h>

int main() {
    // declaritions and initialization
    int age;
    double income;

    // Prompt user for age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Prompt user for annual income
    printf("Enter your annual income (in shillings): ");
    scanf("%lf", &income);

    // Check if the customer qualifies for the loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for the loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
