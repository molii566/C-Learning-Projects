#include <stdio.h>
#include <string.h>  // For strlen() function

int main() {
    char name[25];  // Declare a character array to store the name

    // Prompt the user to enter their name
    printf("\nWhat is your name: ");
    fgets(name, 25, stdin);  // Read the name from standard input, including spaces

    // Remove the newline character at the end of the input string
    name[strlen(name) - 1] = '\0';

    // Check if the user entered an empty name (just pressed Enter)
    while (strlen(name) == 0) {
        printf("\nYou did not type your name, fool!");
        printf("\nWhat is your name: ");
        fgets(name, 25, stdin);  // Prompt again for the name
        name[strlen(name) - 1] = '\0';  // Remove the newline character again
    }

    // Print a greeting with the entered name
    printf("Hello %s", name);

    return 0;  // End of the program
}

