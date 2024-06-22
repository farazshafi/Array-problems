//  remove duplicates 
#include <stdio.h>
int main() {
    int i,count=0,size,j;
    int a[]={10,20,30,20,40,50,50,10,70,60,80,80,90};
    size = sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j] && i!=j){
                for(int k=j;k<size-1;k++){
                    a[k] = a[k+1];
                }
                size--;
                // j--;
            }
        }
    }
    
    for(i=0;i<size;i++){
        printf("%d, ",a[i]);
    }
    
    return 0;
}