#include <stdio.h>

/*
    JTSK-320111
    a4_p1.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int position (char str[], char c)
{
    int idx;
    /* Lop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx); // missing semicolon to indicate where condition ends
        /* d nothing */                                      // otherwise function returns 'idx' on line 9,
    return idx;                                              // which is declared as '0' on line 7
}

int main()
{
    char line [80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }
}
