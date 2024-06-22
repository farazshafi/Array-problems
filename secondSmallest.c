#include <stdio.h>
int main () {
    int arr[5]={277,22,33,9,29};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j,secondSmall,small;
    secondSmall = small =arr[0];
    for(i=0;i<size;i++){
        if(arr[i] < small){
            secondSmall = small;
            small = arr[i];
        }
        if(arr[i] < secondSmall && small > secondSmall){
            secondSmall = arr[i];
        }
        
    }
    printf("Smallest number in array is :%d\n",small);
    printf("Second smallest number in array is :%d\n",secondSmall);

}