#include <stdio.h>
// Write a C program to find the average of all unique elements.
int main () {
    int arr1[]={100,200,300,100,200,250},sum=0,flag,count=0;
    int size = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<size;i++){
        flag=0;
        for(int j=0;j<size;j++){
            if(arr1[i] == arr1[j] && i !=j){
                flag=1;
                break;
            }
        }
        if(i==1){
            printf("Unique elements in array : ");
        }
        if(flag==0){
            count ++;
            sum += arr1[i];
            printf("%d, ",arr1[i]);
        }
    }
    int avg = sum/count;
    printf("\nAverage of all unique elemets:  %d",avg);
    printf("\n");
    return 0;
}