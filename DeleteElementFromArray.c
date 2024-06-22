#include <stdio.h>

int main() {
    int i, pos, arr1[5] = {3, 4, 2, 55, 66};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Enter the position that you want to delete from array: ");
    scanf("%d", &pos);
    
    if (pos <= 0 || pos > size) {
        printf("Invalid, please try again\n");
    } else {
        
        for (i = pos - 1; i < size - 1; i++) {
            arr1[i] = arr1[i+1];
        }
        size--; // Decrease the size of the array
        
        printf("Array after deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d, ", arr1[i]);
        }
        printf("\n");
    }
    
    return 0;
}
