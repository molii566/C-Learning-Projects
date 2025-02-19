#include <stdio.h>

int main() {
    // Loop from 1 to 20
    for (int i = 1; i <= 20; i++) {

        // Check if the current value of i is 12
        if(i == 12) {
            // If i is 12, exit the loop
            // continue;
            break;
        }

        // Print the current value of i
        printf("%d\n", i);
    }

    return 0;  // Indicate successful execution
}
