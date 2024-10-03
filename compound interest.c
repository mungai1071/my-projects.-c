//Compound interest
/*
The program below is of how one can use c language to calculate compound interest
Author: John Mungai
Date:28/09/2024

*/



#include <stdio.h>
#include <math.h>  // For using the pow() function

// Function to calculate compound interest
double compound_interest(double principal, double rate, double time, int n) {
    // Calculate the final amount using the formula A = P(1 + r/n)^(nt)
    double amount = principal * pow((1 + rate / n), n * time);
    return amount;
}

int main() {
    double principal, rate, time, amount, interest;
    int n;

    // Input values from user
    printf("Enter the principal amount (P): ");
    scanf("%lf", &principal);
    
    printf("Enter the annual interest rate (as a percentage): ");
    scanf("%lf", &rate);
    
    printf("Enter the time in years (t): ");
    scanf("%lf", &time);
    
    printf("Enter the number of times interest is compounded per year (n): ");
    scanf("%d", &n);
    
    // Convert the rate to a decimal
    rate = rate / 100;

    // Calculate the final amount
    amount = compound_interest(principal, rate, time, n);

    // Calculate the compound interest
    interest = amount - principal;

    // Output the results
    printf("Final amount (A): %.2f\n", amount);
    printf("Compound interest: %.2f\n", interest);

    return 0;
}
