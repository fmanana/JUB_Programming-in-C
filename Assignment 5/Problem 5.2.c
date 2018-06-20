#include <stdio.h>
#include <string.h>

/*
    JTSK-320111
    a5_p2.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main()
{
    char str[50];
    fgets(str, sizeof(str), stdin);
    int i;
    int length;
    length = strlen(str);

    for (i = 0; i <= length - 1; i ++)
    {
        if (i % 2 == 1)
        {
            printf(" %c\n", str[i]);
        }
        else
        {
            printf("%c\n", str[i]);
        }
    }

    return 0;
}
