#include <stdio.h>

int main() {
    int x, y, z;
    
    // Taking dimensions of the 3D array
    printf("Enter dimensions (x y z): ");
    scanf("%d %d %d", &x, &y, &z);

    int arr[x][y][z];

    // Taking input for 3D array elements
    printf("Enter %d elements:\n", x * y * z);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Displaying 3D array elements
    printf("\n3D Array elements are:\n");
    for (int i = 0; i < x; i++) {
        printf("Block %d:\n", i);
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}