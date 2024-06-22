// find the frequency of all elements in the array 
#include <stdio.h>
int main() {
    int n, i, j, count;
    // Input the size of the array
    n=5;
    int arr[n];
    int freq[n]; // Array to store frequency of each element
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array with -1
    }
    // Calculate frequency of each element
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark this element as counted
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }
    // Display the frequency of each element
    printf("\nElement\tFrequency\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d\t%d\n", arr[i], freq[i]);
        }
    }
    return 0;
}
