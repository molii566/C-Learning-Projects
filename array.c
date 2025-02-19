#include <stdio.h>

int main() {
    // Declare and initialize an array of double values representing prices
    double prices[] = {20, 41, 52, 22, 72, 525};  // Note the trailing comma is fine but not necessary

    // Print the value at index 5 of the prices array, formatted as a whole number
    for (int i = 0; i < 5; i++){
    printf("$%.0lf\n", prices[i]);}

    return 0;  // Indicate successful execution
}
