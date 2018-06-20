/*
    JTSK-320111
    a5_p5.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[])
{
    int i = 0;
    int count = 0;

    for (i = 0; i < strlen(str) - 1; i++)
    {
        if((((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
           && (str[i] != 'A') && (str[i] != 'a')
           && (str[i] != 'E') && (str[i] != 'e') && (str[i] != 'I') && (str[i] != 'i')
           && (str[i] != 'O') && (str[i] != 'o') && (str[i] != 'U') && (str[i] != 'u'))

      count++;
    }


    return count;
}


int main()
{
    char str[100];
    printf("Please enter a string: \n");

    while(1)
    {
        fgets(str, sizeof(str), stdin);
        if (str[0] == '\n')
        break;
        printf("The number of consonants in the string is: %d", count_consonants(str));
    }



    return 0;
}
