#include <stdio.h>

/*
    JTSK-320111
    a4_p4.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

void print_form(int n, int m, char c)
{
    int i = 0;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m + i; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main()
{
    int n, m;
    char c;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    printf("\nEnter an integer m: ");
    scanf("%d", &m);
    getchar();
    printf("\nEnter a character c: ");
    scanf("%c", &c);


    print_form(n, m, c);

    return 0;
}
