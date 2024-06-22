#include <stdio.h>
int main()
{
    int a[5], i, even = 0, odd = 0;
    printf("Enter Elements to an array : \n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nTotal Elements of Even numbers in array is : %d", even);
    printf("\nTotal Elements of Odd numbers in array is : %d\n", odd);
}