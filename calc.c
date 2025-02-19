#include <stdio.h>

int main() {
    char opp;       // Variable to store the operator
    double n1, n2;  // Variables to store the two numbers
    double rs;      // Variable to store the result

    // Prompt the user to enter an operator
    printf("\nEnter the operator you would like to use (+ - * /): ");
    scanf(" %c", &opp);  // Read the operator (space before %c to consume any leftover newline)

    // Prompt the user to enter the first number
    printf("\nEnter the first number: ");
    scanf("%lf", &n1);  // Read the first number as a double

    // Prompt the user to enter the second number
    printf("\nEnter the second number: ");
    scanf("%lf", &n2);  // Read the second number as a double

    // Use a switch statement to perform the operation based on the entered operator
    switch (opp) {
        case '+':
            rs = n1 + n2;  // Addition
            printf("\nThe result: %.0lf", rs);  // Print the result without decimal points
            break;
        case '-':
            rs = n1 - n2;  // Subtraction
            printf("\nThe result: %.0lf", rs);  // Print the result without decimal points
            break;
        case '*':
            rs = n1 * n2;  // Multiplication
            printf("\nThe result: %.0lf", rs);  // Print the result without decimal points
            break;
        case '/':
            if (n2 != 0) {  // Check for division by zero
                rs = n1 / n2;  // Division
                printf("\nThe result: %.0lf", rs);  // Print the result without decimal points
            } else {
                printf("\nError: Division by zero is not allowed.");  // Error message for division by zero
            }
            break;
        default:
            // Handle invalid operators
            printf("\n%c is not a valid operator.", opp);
            break;
    }

    return 0;  // End of the program
}
