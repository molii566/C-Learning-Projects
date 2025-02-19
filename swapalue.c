#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize two character variables
    char x = 'X';  // Variable x is initialized with the character 'X'
    char y = 'Y';  // Variable y is initialized with the character 'Y'
    char temp;     // Temporary variable to help swap the values

    // Swap the values of x and y using the temporary variable
    temp = x;  // Store the value of x in temp
    x = y;     // Assign the value of y to x
    y = temp;  // Assign the value stored in temp (original value of x) to y

    // Print the swapped values of x and y
    printf("x=%c\n", x);  // Prints the new value of x, which is now 'Y'
    printf("y=%c\n", y);  // Prints the new value of y, which is now 'X'

    return 0;  // Indicate successful execution
}
