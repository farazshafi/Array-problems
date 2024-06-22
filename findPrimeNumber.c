#include <stdio.h>

int main() {
    int i, j, a[] = {1, 2, 9, 11, 2, 3, 7, 5, 8, 15}, count = 0, n = 10;
    for(i=0;i<n;i++){
        if(a[i]<=1){
            continue;
        }
        count = 0;
        for(j=2;j<=a[i]/2;j++){
            if(a[i]%j==0){
                count = 1;
                break;
            }
        }
        if(count==0){
            printf("%d, ",a[i]);
        }
    }
    printf("\n");
    return 0;
}
