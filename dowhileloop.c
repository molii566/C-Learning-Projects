#include <stdio.h>

int main() {
    int num = 0;   // Initialize 'num' to 0
    int sum = 0;   // Initialize 'sum' to 0

    // Start a do-while loop
    do {
        printf("Enter number above 0: ");
        scanf("%d", &num);  // Take input from the user and store it in 'num'

        if (num > 0) {      // Check if the entered number is greater than 0
            sum += num;     // If true, add 'num' to 'sum'
        }

        printf("The sum is: %d\n", sum);  // Print the current sum
    } while (num > 0);  // Continue looping while 'num' is greater than 0

    return 0;  // Exit the program
}
