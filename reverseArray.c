#include <stdio.h>

int main () {
    int arr1[5],i,arr2[5],temp;
    printf("Enter values for an array : ");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Reversed values are : ");
    for(i=4;i>=0;i--){
        temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i]=temp;
    }
    for(i=4;i>=0;i--){
        printf("%d, ",arr2[i]);
    }
    printf("\n");
}