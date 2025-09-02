#include <stdio.h>

int main(void) {
    int num;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check condition
    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }

    return 0;
}