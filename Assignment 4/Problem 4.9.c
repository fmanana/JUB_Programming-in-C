#include <stdio.h>
#include <string.h>

/*
    JTSK-320111
    a4_p9.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main()
{
    char two[100];

    scanf("%s", &two);
    char c;
    printf("Enter a character:\n");
    getchar();
    scanf("%c", &c);

    int i, bool = 0;
    for(i = 0; two[i] != '\0'; i++)
    {
        if(c == two[i])
        {
            bool = 1;
            printf("Position is %d\n", i);
        }
    }
    if(bool == 0)
     printf("There is no character in string two.\n");


    return 0;
}
