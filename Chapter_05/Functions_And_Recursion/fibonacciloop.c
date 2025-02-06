#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1, nextTerm;

    // Ask the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    // Loop to generate Fibonacci sequence
    for (i = 1; i <= n; ++i) {
        printf("%d ", t1);  // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update t1 to the next term
        t2 = nextTerm;      // Update t2 to the next term
    }

    return 0;
}
