#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int fib[n + 1]; // create an array to store previously calculated Fibonacci numbers
        fib[0] = 0;
        fib[1] = 1;
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2]; // calculate Fibonacci numbers using the previous two numbers
        }
        return fib[n];
    }
}

int main() {
    int n;
    printf("enter the number to view the fibonacci sequence upto:\n");
    scanf("%d", &n); // example value
    printf("Fibonacci sequence up to %d:\n", n);
    for (int i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
