#include <stdio.h>

int main() {
    // Declare and initialize a 2D array with 2 rows and 3 columns
    int numbers[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // Calculate the number of rows by dividing the total size of the array
    // by the size of one row
    int rows = sizeof(numbers) / sizeof(numbers[0]);

    // Calculate the number of columns by dividing the size of one row
    // by the size of one element
    int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);

    // Print the number of rows
    printf("rows: %d\n", rows);

    // Print the number of columns
    printf("columns: %d\n", columns);

    // Loop through the array and print each element
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", numbers[i][j]);  // Print each element followed by a space
        }
        printf("\n");  // Print a newline after each row
    }

    return 0;  // Indicate successful execution
}
