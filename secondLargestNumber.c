#include <stdio.h>

int main () {
    int max,secondMax,i;
    int array[5]={10,22,33,817,1343};
    secondMax = max = array[0];
    int size = sizeof(array)/sizeof(array[0]);
// find largest number in array ;
    for(i=0;i<size;i++){
        if(array[i] > max){
            secondMax = max;
            max = array[i];
        }
        if(array[i] > secondMax && array[i] < max){
            secondMax = array[i];
        }

    }
    printf("Max number in the array is :%d\n ",max);
    printf("Second max number in the array is :%d \n",secondMax);

}