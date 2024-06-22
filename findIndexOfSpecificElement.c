#include <stdio.h>

int findIndex (int target,int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        if(target == arr[i]){
            return i;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {1, 7, 3, 2, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int index = findIndex(target,arr,size);
    if(index != 1){
        printf("The element %d is found at index %d\n",target,index);
    }else{
        printf("The element %d is not found in the array\n", target);

    }
}

