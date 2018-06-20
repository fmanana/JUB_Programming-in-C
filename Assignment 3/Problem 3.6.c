#include <stdio.h>

/*
    JTSK-320111
    a3_p6.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main()
{
    int n;
    float x;
    int i = 0;  //iterator
    printf("Please enter a valid integer: \n");
    do
    {
       scanf("%d", &n);
    }while (n <= 0);

    printf("Please enter any number: \n");
    scanf("%f", &x);

    for (i = 1; n >= i; i++)
    {
        printf("%f\n", x);
    }while (i <= n);


    return 0;
}
