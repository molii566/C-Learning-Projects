#include <stdio.h>

int main() {
    int rows;      // Declare variable for the number of rows
    int columns;   // Declare variable for the number of columns
    char symbol;   // Declare variable for the symbol to print

    // Prompt the user to enter the number of rows
    printf("Enter # of rows: ");
    scanf("%d", &rows);  // Read the number of rows input by the user

    // Prompt the user to enter the number of columns
    printf("Enter # of columns: ");
    scanf("%d", &columns);  // Read the number of columns input by the user

    // Prompt the user to enter a symbol to print
    printf("Enter a symbol to print: ");
    scanf(" %c", &symbol);  // Read a single character input for the symbol (note the space before %c to clear newline characters from the input buffer)

    // Outer loop to iterate over each row
    for(int i = 1; i <= rows; i++) {
        // Inner loop to iterate over each column within a row
        for (int j = 1; j <= columns; j++) {
            printf("%c", symbol);  // Print the symbol for each column in the row
        }
        printf("\n");  // Move to the next line after completing a row
    }

    return 0;  // Indicate successful execution
}

