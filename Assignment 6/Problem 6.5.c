/*
    JTSK-320111
    a6_p5.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>

float scalar_prod(float arr[], float arr2[], int n)
{
    int i;
    float prod[n]; // new array for storing product of components
    float sum;

    for(i = 0; i < n; i++)
    {
        prod[i] = arr[i] * arr2[i]; //finding the product of the components
        sum += prod[i]; // the actual scalar product
    }

    return sum;
}

int smallest_v(float arr[], int n)
{
    int i, min_i = 0;
    float min = arr[0];
    for(i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
            min_i = i;
        }
    }

    return min_i;
}

int largest_v(float arr[], int n)
{
    int i, max_i = 0;
    float max = arr[0];
    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            max_i = i;
        }
    }

    return max_i;
}
int main()
{
    int i, j;
    int n;
    printf("Please enter the number of dimensions of your vectors:\n");
    scanf("%d", &n);

    float v[n];
    float w[n];

    printf("Please enter the components of vector v:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%f", &v[i]);
    }
    printf("Please enter the components of vector w:\n");
    for(j = 0; j < n; j++)
    {
        scanf("%f", &w[j]);
    }

    printf("The scalar product is:\n");
    printf("%f\n", scalar_prod(v, w, n));

    printf("\nThe smallest value in v is: %f\t", v[smallest_v(v, n)]);
    printf("The position of the smallest component is: %d\n", smallest_v(v, n));
    printf("\nThe largest value in v is: %f\t", v[largest_v(v, n)]);
    printf("The position of the largest component is: %d\n", largest_v(v, n));

    return 0;
}
