/*
    JTSK-320111
    a5_p10.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}

int main()
{
    float a, b;
    float prod, div, pwr, invb;
    printf("Enter a value for a: \n");
    scanf("%f", &a);
    printf("Enter a value for b: \n");
    scanf("%f", &b);

    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("The product of the two is: %f\n", prod);
    printf("The division of a by b is: %f\n", div);
    printf("a to the power of b is: %f\n", pwr);
    printf("The inverse of b is: %f\n", invb);

    return 0;
}
