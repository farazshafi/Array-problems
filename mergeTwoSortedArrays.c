// merge two sorted array
#include <stdio.h>
int main()
{
    int arr1[5]={10,20,90,40,50},arr2[5]={11,22,31,38,51};
    int i,j,temp;
    int arr1Size = sizeof(arr1)/sizeof(arr1[0]);
    int arr2Size = sizeof(arr2)/sizeof(arr2[0]);
    int totalSize = arr1Size + arr2Size;
    int mergedArray[totalSize];
    // adding first array to merged array 
    for(i=0;i<arr1Size;i++){
        mergedArray[i] = arr1[i];
    }
    // add second array to merged array
    for(i=0,j=arr1Size;j<totalSize&&i<arr2Size;i++,j++){
        mergedArray[j] = arr2[i];
    }
    // sorting the merged array 
    for(i=0;i<totalSize-1;i++){
        for(j=i+1;j<totalSize;j++){
            if(mergedArray[i] > mergedArray[j]){
                temp = mergedArray[i];
                mergedArray[i] = mergedArray[j];
                mergedArray [j] = temp;
            }
        }
    }
    // merged-(two sorted arrays)
    printf("Sorted Merged arrays:");
    for(i=0;i<totalSize;i++){
        printf("%d, ",mergedArray[i]);
    }
    printf("\n");
    return 0;
}