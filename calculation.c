/*
The program to calculate the fine for overdue library books. 
Author: John Mungai
Date:   01/10/2024
*/


#include <stdio.h>

int main() {
    int bookID, dueDate, returnDate, daysOverdue;
    int fineRate = 0, fineAmount = 0;

    // Input from the user
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);

    printf("Enter the Due Date (as an integer, e.g., 5 for the 5th day): ");
    scanf("%d", &dueDate);

    printf("Enter the Return Date (as an integer, e.g., 10 for the 10th day): ");
    scanf("%d", &returnDate);

    // Calculate days overdue
    daysOverdue = returnDate - dueDate;

    // Determine the fine rate based on days overdue
    if (daysOverdue > 0 && daysOverdue <= 7) {
        fineRate = 20;  // Ksh. 20 per day
    } else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;  // Ksh. 50 per day
    } else if (daysOverdue >= 15) {
        fineRate = 100; // Ksh. 100 per day
    } else {
        daysOverdue = 0;  // No overdue, no fine
    }

    // Calculate the fine amount
    fineAmount = fineRate * daysOverdue;

    // Display the results
    printf("\n--- Overdue Book Fine Details ---\n");
    printf("Book ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Fine Rate: Ksh.%d per day\n", fineRate);
    printf("Total Fine Amount: Ksh.%d\n", fineAmount);

    return 0;
}
