#include <stdio.h>

int main() {
    int i, j, k, n = 10;
    int a[] = {10, 2, 33, 11, 28, 32, 1, 29, 28, 21};
    
    // Loop through the array
    for (i = 0; i < n; i++) {
        // Check if a[i] is an odd number
        if (a[i] % 2 != 0) {
            // If a[i] is an odd number, delete the next 2 elements
            int elementsToDelete = 2;
            for (j = i + 1; j < n && elementsToDelete > 0; j++, elementsToDelete--) {
                for (k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; // Reduce the size of the array
                j--; // Adjust j after shifting
            }
        }
    }

    // Print the modified array
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
