#include <stdio.h>

int main()
{
    int x = 0, i, arr1[5], arr2[5], sumArr[5];
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            printf("Enter elements to array 1 : \n");
        }
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            printf("Enter elements to array 2 : \n");
        }
        scanf("%d", &arr2[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        sumArr[i] = arr1[i] + arr2[i];
        printf("%d , ", sumArr[i]);
    }
    printf("\n");
}
