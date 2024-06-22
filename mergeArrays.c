#include <stdio.h>
int main()
{
    int i, j, arr1[] = {10, 20, 30, 40, 50}, arr2[] = {60, 70, 80, 90,100};
    int arr1Size = sizeof(arr1) / sizeof(arr1[0]);
    int arr2Size = sizeof(arr2) / sizeof(arr2[0]);
    int toatlSzie  = arr1Size + arr2Size;
    int mergedArray[toatlSzie];
    // adding first array to merged array
    for (i = 0; i < arr1Size; i++)
    {
        mergedArray[i] = arr1[i];
    }
    // adding second array to merged array
    for (i = 0,j=arr1Size;j<toatlSzie && i<arr2Size; j++,i++)
    {
        mergedArray[j] = arr2[i];
    }
    for(i=0;i<toatlSzie;i++){
        printf("%d, ",mergedArray[i]);
    }
}
