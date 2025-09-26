#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1;  // use long long to store large results

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check negative number
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop to calculate factorial
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

