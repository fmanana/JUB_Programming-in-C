/*
    JTSK-320111
    a6_p10.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text1[100], text2[100]; // strings in files
    char line[200];


    FILE *input1, *input2, *output;
    input1 = fopen("text1.txt", "r"); // reading from first file
    input2 = fopen("text2.txt", "r"); // reading from second file
    output = fopen("merge12.txt", "w"); // writing to a file

    while(fgets(line, "%s", input1)!= NULL)
    {
        fprintf(output, line);
    }
    while(fgets(line, "%s", input2)!= NULL)
    {
        fprintf(output, line);
    }

    fclose(input1);
    fclose(input2);
    fclose(output);

    return 0;
}
