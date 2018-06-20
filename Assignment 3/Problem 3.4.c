#include <stdio.h>

/*
    JTSK-320111
    a3_p4.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main(){
    int n;
    int x = 2;

    do
    {
        scanf("%d", &n);
    } while (n <= 0);
    printf("1 day = 24 hours\n");
    while (x <= n)
    {
        printf("%d days = %d hours\n", x, x * 24);
        x++;
    }

    return 0;
}
