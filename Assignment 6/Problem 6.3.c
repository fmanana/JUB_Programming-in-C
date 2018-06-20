/*
    JTSK-320111
    a6_p3.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int counter_lower(char* str)
{
    char *location = str;
    int count = 0;

    for(;*location != '\0'; location++)
    {
        if(*location >= 'a' && *location <= 'z')
        {
            count++;
        }
    }

    return count;
}


int main()
{
    char string[50];
    printf("Please enter a string:\n");

    while (1)
    {
        fgets(string, sizeof(string), stdin);
        if(strcmp(string, "\n") == 0)
            break;
        printf("The number of lower case characters in the string is: %d", counter_lower(string));
    }

    return 0;
}
