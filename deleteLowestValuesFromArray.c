// delete lowest vales in the array 

# include <stdio.h>

int main () {
    int a[]={10,33,233,221,1,300,245,12}; // expected output = 10,33,233,221,300,245,12
    int i,x,size,lowest=a[0],index;
    size = sizeof(a)/sizeof(a[0]);
    for(i=0;i<size;i++){
        if(lowest > a[i]){
            lowest = a[i];
            index = i;
        }
    }
      // Shift elements to the left from the lowest value's index
    for (i = index; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    size--;
    for(i=0;i<size;i++){
          printf("%d, ",a[i]);
    }
}