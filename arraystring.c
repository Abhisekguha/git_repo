#include <stdio.h>

int main() {
    char names[3][20]; // Declare a 2D array of characters to store 3 names of maximum length 20 characters
    
    // Prompt the user to enter three names
    printf("Enter three names:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%s", names[i]); // Read each name from standard input and store it in the array
    }
    
    // Print out the names in reverse order
    printf("\nNames in reverse order:\n");
    for (int i = 2; i >= 0; i--) {
        printf("%s\n", names[i]); // Print out each name in the array
    }
    
    return 0;
}
