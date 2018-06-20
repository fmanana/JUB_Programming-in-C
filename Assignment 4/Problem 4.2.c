#include <stdio.h>

/*
    JTSK-320111
    a4_p2.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

float convert(int cm)
{
    float km = cm / 100000.0;
    return km;
}

int main()
{
    char input[100];
    int a;
    printf("Enter an integer number of centimetres: \n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &a);
    printf("The distance in kilometres is: %f\n", convert(a));
}
