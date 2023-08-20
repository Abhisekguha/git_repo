#include <stdio.h>

int main() {
    // Creating a file pointer and opening a file in write mode
    FILE *filePointer = fopen("example.txt", "w");
    
    // Checking if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    
    // Writing to the file
    fprintf(filePointer, "Hello, world! this is a sample file to test file handling op");
    
    // Closing the file
    fclose(filePointer);
    
    // Reopening the file in read mode
    filePointer = fopen("example.txt", "r");
    
    // Checking if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error: Unable to open file.\n");
        return 1;
    }
    
    // Reading from the file
    char buffer[100];
    fgets(buffer, 100, filePointer);
    
    // Displaying the file contents
    printf("File contents: %s\n", buffer);
    
    // Closing the file
    fclose(filePointer);
    
    return 0;
}
