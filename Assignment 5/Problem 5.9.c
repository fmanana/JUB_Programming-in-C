/*
    JTSK-320111
    a5_p9.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int prodminmax(int arr[], int n)
{
    int i, j;
    int max, min;
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    for(j = 1; j < n; j++)
    {
        if(arr[j] < min)
            min = arr[j];
    }

    int product = max * min;

    return product;
}

int main()
{
    int n;
    printf("Enter the number of elements in your array:\n");
    scanf("%d", &n);
    printf("Enter your elements:\n");

    int *ptr;
    ptr = (int*)malloc(sizeof(int)*n);

    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("The product of the min and max values is: %d\n", prodminmax(ptr, n));
    free(ptr);

    return 0;
}
