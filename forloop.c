#include <stdio.h>

int main(void) {
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }

    printf("Sum of first %d numbers = %d\n", n, sum);

    return 0;
}