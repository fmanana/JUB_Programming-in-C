/*
    JTSK-320111
    a5_p3.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num)
{
    int i;
    float mean = 1;
    float g_mean, a;
    if(num == 0)
        return 0;


    for (i = 0; i < num; i++)
    {
        mean *= arr[i];
    }
    a = 1.0 / i;
    g_mean = pow(mean, a);
    return g_mean;
}

float max(float arr[], int num)
{
    int i;
    float max;
    max = arr[0];
    if(num == 0)
        return 0;

    for(i = 0; i < num; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}

float min(float arr[], int num)
{
    int i;
    float min;
    min = arr[0];
    if(num == 0)
        return 0;

    for(i = 0; i < num; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}

float sum_elements(float arr[], int num)
{
    int sum = 0;
    int i;
    for(i = 0; i < num; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

float elements(float arr[], int num)
{
    return num;
}

int main()
{
    float array[15];
    int i, count = 0;
    char c;
    printf("Please enter your elements:\n");

    for(i = 0; i < 15; i++)
    {
        scanf("%f", &array[i]);
        count++;
        // counter is used to keep track of number of elements
        if (array[i] < 0)
        {
            break;
        }
    }

    getchar();
    printf("Please enter a function: ");
    scanf("%c", &c);


    switch(c)
    {
        case 'm':
            printf("The mean is: %f\n", geometric_mean(array, count));
            break;
        case 'h':
            printf("The highest number is: %f", max(array, count));
            break;
        case 'l':
            printf("The lowest number is: %f", min(array, count));
            break;
        case 's':
            printf("The sum of the elements is: %f", sum_elements(array, count));
            break;
    }

    return 0;
}
