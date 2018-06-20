#include <stdio.h>

/*
    JTSK-320111
    a4_p3.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

float to_pounds(int kg, int g)
{
    float pounds = ((g / 1000.0) + kg) * 2.2; //converting grams to kilograms
    return pounds;                            // finding the sum and converting to pounds
}

int main()
{
    char input[100];
    int a, b;
    printf("Please enter a mass in kg: \n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &a);
    printf("Please enter a mass in grams: \n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &b);

    printf("The total mass in pounds is: %f", to_pounds(a,b));

    return 0;

}
