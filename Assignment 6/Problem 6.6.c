/*
    JTSK-320111
    a6_p6.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>

void recursion(int n)
{
    if(n <= 1)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d, ", n);
        recursion(n - 1);
    }while(n > 0);

}

int main()
{
    int n;
    scanf("%d", &n);

    recursion(n);

    return 0;
}

