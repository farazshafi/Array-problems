#include <stdio.h>
int main()
{
    int arr[5] = {9, 23, 104, 889, 1};
    int min, max, i;
    min = max = arr[0];
    for(i=1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("Max number in array is : %d\n", max);
    printf("Min number in array is : %d\n", min);
}