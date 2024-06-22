#include <stdio.h>

int main() {
    // Define the array
    int arr[] = {1, 5, 2, 10, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Finding the largest number in the array
    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    // Calculating the factorial of the largest number
    unsigned long long factorial = 1;
    for(int i = 1; i <= max; i++) {
        factorial *= i;
    }

    // Printing the result
    printf("The factorial of %d is: %llu\n", max, factorial);//llu-  ll=long long & u=

    return 0;
}
