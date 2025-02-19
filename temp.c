#include <stdio.h>
#include <ctype.h>  // For toupper() function

int main() {
    char unit;   // Variable to store the unit of temperature (C or F)
    float temp;  // Variable to store the temperature value

    // Prompt the user to specify the unit of temperature
    printf("\nIs the temperature in (F) or (C)? ");
    scanf(" %c", &unit);  // Read a character input and store it in 'unit'
    unit = toupper(unit);  // Convert the character to uppercase to handle lowercase input

    // Check if the unit is 'C' (Celsius)
    if (unit == 'C') {
        printf("\nEnter the temperature in C: ");
        scanf("%f", &temp);  // Read the temperature in Celsius
        // Convert Celsius to Fahrenheit
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature is: %.1f F", temp);  // Display the temperature in Fahrenheit
    }
    // Check if the unit is 'F' (Fahrenheit)
    else if (unit == 'F') {
        printf("\nEnter the temperature in F: ");
        scanf("%f", &temp);  // Read the temperature in Fahrenheit
        // Convert Fahrenheit to Celsius
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature is: %.1f C", temp);  // Display the temperature in Celsius
    }
    // Handle invalid unit input
    else {
        printf("\n%c - Did you mean to type C or F? It doesn't look like it!", unit);
    }

    return 0;  // End of the program
}
