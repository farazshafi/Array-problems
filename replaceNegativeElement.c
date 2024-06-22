#include <stdio.h>
int main () {
    int i,arr[5] = {20,-34,20,-887,800};
    for(i=0;i<5;i++){
        if(arr[i]<0){
            arr[i] = 0;
        }
    }
    for(i=0;i<5;i++){
        printf("%d, ",arr[i]);
    }
}
