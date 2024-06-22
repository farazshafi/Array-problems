#include <stdio.h>

int main() {
    int i, j, k, count, n = 10;
    int a[] = {10, 2, 33, 11, 28, 32, 1, 29, 28, 21};
    
    // Loop through the array
    for (i = 0; i < n; i++) {
        // Check if a[i] is a prime number
        if (a[i] > 1) { // Check for prime numbers greater than 1
            count = 0;
            for (j = 2; j <= a[i] / 2; j++) {
                if (a[i] % j == 0) {
                    count = 1; // Not a prime number
                    break;
                }
            }
            // If a[i] is a prime number, delete the next 2 elements
            if (count == 0) {
                int elementsToDelete = 2;
                for (j = i + 1; j < n && elementsToDelete > 0; j++, elementsToDelete--) { // J++ to move to the next element after each deletion.
                    for (k = j; k < n - 1; k++) {
                        a[k] = a[k + 1];
                    }
                    n--; // Reduce the size of the array
                    j--; // Adjust j after shifting
                }
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
