/*
    JTSK-320111
    a5_p12.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>


void replaceAll(char *str, char c, char e)
{
    int i = strlen(str);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == c)
            str[i] = e;
    }
}

int main()
{
    char input[80];
    char c, e;
    for(;;)
    {
    printf("Please enter a string:\n");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0';

    if(strcmp(input, "stop") == 0)
        break;

    printf("Please enter a character to be replaced:\n");
    scanf("%c", &c);
    getchar();
    printf("Please enter a character to replace this character:\n");
    scanf("%c", &e);
    getchar();
    printf("Original string: %s\n", input);
    replaceAll(input, c, e);
    printf("String after replacement: %s\n", input);
    }
    return 0;
}
