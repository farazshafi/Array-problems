#include <stdio.h>
int main (){
    int sum=0,i,mark[5]={20,30,20,30,50};
    float avg=0;
    for (i=0;i<=5;i++){
        sum += mark[i];
    }
    avg = sum / 5;
    printf("Sum of an array is : %d \n",sum);
    printf("AVG of an array is : %f \n",avg);

}