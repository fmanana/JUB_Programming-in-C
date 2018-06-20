#include <stdio.h>

/*
    JTSK-320111
    a3_p7.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main()
{
    char ch[100];
    int n;
    int i = 0; // iterator

    printf("Please enter lower case character: ");
    scanf("%s", &ch);
    printf("Please enter an integer: ");
    scanf("%d", &n);

    printf("%s\n", ch); // to print 'ch' for n = 0
    for(i = 1; n >= i; i++)
    {
        printf("%s-%d\n", ch, i);
    }
    return 0;
}
