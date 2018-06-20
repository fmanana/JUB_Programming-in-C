/*
    JTSK-320111
    a6_p7.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>

int prime(int p, int n)
{
    if(n <= 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else if((p % n) == 0)
    {
        return 0;
    }
    else
    {
        prime(p, n - 1);
    }
}

int main()
{
    int x;
    printf("Please enter a positive integer:\n");
    scanf("%d", &x);


    if(prime(x, x - 1) == 0)
    {
        printf("Value is not a prime\n");
    }
    else
    {
        printf("Value is a prime\n");
    }
    return 0;
}
