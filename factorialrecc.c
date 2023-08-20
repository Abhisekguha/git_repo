#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
   if (n == 0) {
      return 1;
   } else {
      return n * factorial(n - 1);
   }
}

int main() {
   int n = 5;
   
   // Calculate factorial using recursion
   int result = factorial(n);
   
   printf("Factorial of %d is %d\n", n, result);
   
   return 0;
}
