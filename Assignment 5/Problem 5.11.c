/*
    JTSK-320111
    a5_p11.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int count_insentives(char *str, char c)
{
    int i, count = 0;
    for(i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'c' || str[i] == 'C')
            count++;
        //loop counting the occurrences of the char 'c'
    }
    return count;
}

int main()
{
    int i, n;
    char first[50], second[50];
    strcpy(second, first);
    // copying first into second array
    printf("Please enter your 'n':\n");
    scanf("%d", &n);

    char *ptr;
    ptr = (char*)malloc(sizeof(char)*(n+1));
    if (ptr == NULL)
    {
        printf("There is no occurrence of that character");
        exit(1);
        printf("\n");
    }

        printf("Please enter a string:\n");
        for(i = 0; i < n; i++)
        {
            scanf("%c", &ptr[i]);
        }

        printf("The character b appears %d times in the string.\n", count_insentives(ptr, 'b'));
        printf("The character H appears %d times in the string.\n", count_insentives(ptr, 'H'));
        printf("The character 8 appears %d times in the string.\n", count_insentives(ptr, '8'));
        printf("The character u appears %d times in the string.\n", count_insentives(ptr, 'u'));
        printf("The character $ appears %d times in the string.\n", count_insentives(ptr, '$'));

        free(ptr);

        return 0;
}
