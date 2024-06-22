#include <stdio.h>
int main() {
    int i,missingNumber,sum=0,expectedNumer,size,n;
    int arr[]={1,3,4,5};
    for(i=0;i<4;i++){
        sum +=arr[i];
    }
    printf("Sum of the current array is :%d\n ",sum);
    size = sizeof(arr)/sizeof(arr[0]);
    n = size + 1; 
    printf("N :%d\n ",n);
    expectedNumer = n*(n+1)/2;
    printf("expected Number is :%d\n ",expectedNumer);
    missingNumber = expectedNumer - sum;
    printf("Missing number is :%d\n ",missingNumber);

    return 0;
}