#include <stdio.h>

/*
    JTSK-320111
    a5_p1.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main()
{
    int a, b; //lower and upper limits
    int i;    //increment
    float perimeter, area;
    int z;    //starting point
    printf("Please enter a lower limit: \n");
    scanf("%d", &a);    //lower
    printf("Please enter an upper limit: \n");
    scanf("%d", &b);    //upper
    printf("Please enter an increment: \n");
    scanf("%d", &i);    //step

    for (z = a; z <= b; z += i)
    {
        area = 3.1415 * (z * z);
        perimeter = 2 * z * 3.1415;
        printf("%d ", z);
        printf("%f ", perimeter);
        printf("%f ", area);
        printf("\n");
    }

    return 0;
}
