#include <stdio.h>

/*
    JTSK-320111
    a3_p5.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main()
{
    int n;
    int x = 1;

    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    printf("1 day = 24 hours\n");
    for (x <= n; x++;)
    {
        printf("%d days = %d hours\n", x, x * 24);
        if (x >= n) //To end the loop
        {
            return 0;
            //If the increment of 'x' becomes larger than the input, the process ends
        }
    }
    return 0;
}
