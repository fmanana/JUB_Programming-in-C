/*
    JTSK-320111
    a5_p6.c
    Fezile Manana
    f.manana@jacobs-university.de
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void max(int array[], int n)
{
    int i, max_1, max_2;
    if (array[0] <= array[1])
    {
        max_1 = array[1];
        max_2 = array[0];
    }
    else
    {
        max_1 = array[0];
        max_2 = array[1];
    }

    for(i = 2; i < n; i++)
    {
        if(array[i] > max_1)
        {
            max_2 = max_1;
            max_1 = array[i];
        }
        else if(array[i > max_2])
        {
            max_2 = array[i];
        }
    }
    printf("The two maxima in the array are: %d and %d\n", max_1, max_2);
}

int main()
{
    int i, n;
    printf("Enter the number of elements in your array: \n");
    scanf("%d", &n);

    int *ptr;
    ptr = (int*) malloc(sizeof(int)*n);
    //check this line
    printf("Please enter your elements:\n");
    if (ptr == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }
    max(ptr, n);

    free(ptr);

    return 0;
}
