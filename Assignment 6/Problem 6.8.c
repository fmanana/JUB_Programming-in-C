/*
    JTSK-320111
    a6_p8.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
    char x, y;

    FILE *input, *output;
    input = fopen("chars.txt", "r"); // reading from the file
    output = fopen("codesum.txt", "w"); // writing to a file

    if(input == NULL)
    {
        printf("There are no characters to be read in this file!\n");
        exit(1);
    }

    x = getc(input);
    y = getc(input);
    m = x + y;
    fprintf(output, "The sum of the ASCII values is: %d", m);
    fclose(input);
    fclose(output);

    return 0;
}
