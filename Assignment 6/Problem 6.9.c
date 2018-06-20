/*
    JTSK-320111
    a6_p9.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sum, diff, prod, div;
    double x, y;
    char file1[100], file2[100];

    printf("Please a file name:\n");
    scanf("%s", &file1);
    printf("Please enter a second file name:\n");
    scanf("%s", &file2);

    FILE *input1, *input2, *output;
    input1 = fopen(file1, "r"); // reading from first file
    input2 = fopen(file2, "r"); // reading from second file
    output = fopen("results.txt", "w"); // writing to a file


    fscanf(input1, "%lf", &x);
    fscanf(input2, "%lf", &y);
    sum = x + y;
    diff = x - y;
    prod = x * y;
    div = x / y;
    fprintf(output, "Sum: %lf\nDifference: %lf\nProduct: %lf\nDivision: %lf\n", sum, diff, prod, div);
    fclose(input1);
    fclose(input2);
    fclose(output);

    return 0;
}
