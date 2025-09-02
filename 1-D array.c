#include <stdio.h>

int main() {
    int n, i;

    // Take array size
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    // Take array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    printf("Array elements are:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}