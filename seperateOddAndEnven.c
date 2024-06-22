#include <stdio.h>
int main()
{
    int arr[] = {23, 55, 82, 982, 1, 3, 4, 6};
    int evenArr[10], oddArr[10];
    int n = 8,count=0,j=0,k=0;
    for (int i = 0; i < n; i++){
        if(arr[i]%2==0){
            evenArr[j] = arr[i];
            j++;
        }else{
            oddArr[k]=arr[i];
            k++;
        }
    }
    printf("Even numbers in the arrays are : ");
    for(int i=0;i<j;i++){
        printf("%d, ",evenArr[i]);
    }
    printf("\n");
    printf("Odd numbers in the arrays are : ");
    for(int i=0;i<k;i++){
        printf("%d, ",oddArr[i]);
    }
    printf("\n");
    
    return 0;
}