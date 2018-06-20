#include <stdio.h>
#include <string.h>

/*
    JTSK-320111
    a4_p8.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int find_char(char c, char s[])

{
    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(c == s[i])
        return i;
    }
    return -1;
}
int main()
{
    char one[100];
    char two[100];
    int length_1;
    int length_2;

    scanf("%s", &one);
    scanf("%s", &two);

    length_1 = strlen(one);
    length_2 = strlen(two);
    printf("The length of string one is: %d\n", length_1);
    printf("The length of string two is: %d\n", length_2);

    char concat[200];
    strcat(concat, one);
    strcat(concat, two);
    printf("The concatenation is: %s\n", strcat(concat, two));

    char three[100];
    strcpy(three, two);
    printf("%s\n", three);

    int compare;
    compare = strcmp(one, two);
    if(compare < 0)
    {
        printf("String one comes first.\n");
    }
    else if (compare > 0)
        {
            printf("String two comes first.\n");
        }
    else
    {
        printf("The strings are the same.\n");
    }

    char c;
    printf("Enter a character:\n");
    getchar();
    scanf("%c", &c);
    if(find_char(c, two)!= -1)
    {
        printf("The position of this character in string two is: %d", find_char(c, two));
    }
    else
        printf("There is no character in string two.\n");


    return 0;
}
