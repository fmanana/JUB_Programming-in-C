#include <stdio.h>

/*
    JTSK-320111
    a4_p6.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

double sum25(double v[], int n)
{
    double sum;
    if (n >= 6)  // Array needs to have at least
                 // 5 elements to add the 2nd and 5th element
    {
        sum = v[2] + v[5];  //Assuming 2 and 5 are the index not the position
    }
    else
    {
        return -111;
    }
    return sum;
}

int main()
{
    int n;
    int i = 0;
    int count = 0;
    double sum;
    double v[20];

    printf("Please enter an integer: ");
    scanf("%d", &n);
    printf("Please enter as many numbers as the integer just entered:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
        count++;
    }

    sum = sum25(v, count);
    printf("The sum of the 2nd and 5th element is: %lf\n\n", sum);

    printf("The elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%lf\n", v[i]);
    }

    return 0;
}
