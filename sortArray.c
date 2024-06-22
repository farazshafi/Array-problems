#include <stdio.h>
int main (){
    int limit,i,j,value[100],temp;
    printf("Enter a limits:");
    scanf("%d",&limit);
    printf("Enter a values:");
    for(i=0;i<limit;i++){
        scanf("%d",&value[i]);
    }

    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(value[i]>value[j]){
                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }
    printf("Sorted arrays are :");
    for(i=0;i<limit;i++){
        printf("%d, ",value[i]);
    }
}