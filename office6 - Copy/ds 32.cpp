#include <stdio.h>

// Recursive function to calculate Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;   // base case
    else if (n == 1)
        return 1;   // base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // recursive call
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}



