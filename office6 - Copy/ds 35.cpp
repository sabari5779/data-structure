#include <stdio.h>

int main() {
    int n, i;
    long long int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 1; i <= n; i++) {
        if(i == 1) {
            printf("%lld ", first);   // first term
            continue;
        }
        if(i == 2) {
            printf("%lld ", second);  // second term
            continue;
        }

        next = first + second;   // next term
        first = second;          // update first
        second = next;           // update second

        printf("%lld ", next);
    }

    return 0;
}

