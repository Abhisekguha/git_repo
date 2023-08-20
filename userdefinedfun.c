//declaring and definnig a user defined function in c 

#include <stdio.h>

// Function declaration
int calculateSum(int, int);

int main() {
   int x = 5, y = 7;
   
   // Function call
   int sum = calculateSum(x, y);
   
   printf("Sum of %d and %d is %d\n", x, y, sum);
   
   return 0;
}

// Function definition
int calculateSum(int a, int b) {
   int result = a + b;
   return result;
}