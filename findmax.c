#include <stdio.h>

// Function to calculate the square of a number
double square(double x) {
    return x * x;  // Return the result of x multiplied by itself
}

// Function to print a birthday message
void hello(char name[], int age) {
    printf("\nHappy birthday %s", name);  // Print a greeting with the name
    printf("\nYou are %d years old", age);  // Print the age
}

// Function to find the maximum of two integers
int findmax(int x, int y) {
    return (x > y) ? x : y;  // Return x if x is greater than y, otherwise return y
}

int main() {
    // Call the square function with 102.1 and store the result in 'x'
    double x = square(102.1);
    
    // Call the findmax function with 3 and 4 and store the result in 'max'
    int max = findmax(3, 4);
    
    // Initialize a character array 'name' with the string "bro"
    char name[] = "bro";
    
    // Initialize the integer 'age' with 21
    int age = 21;
    
    // Call the hello function with 'name' and 'age' to print the birthday message
    hello(name, age);
    
    // Print the result of the square function
    printf("\n%lf", x);
    
    // Print the result of the findmax function
    printf("\n%d", max);
    
    return 0;  // End of the program
}
