#include <stdio.h>

/*
    JTSK-320111
    a4_p7.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

float product(float a, float b)
{
    float product_ab;
    product_ab = a * b;
    return product_ab;
}

void productbyref(float a, float b, float *p)
{
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    *a = *a + 3;
    *b = *b + 11;
}

int main()
{
    float a, b;
    float ab;
    float ref_ab;

    printf("Please enter two numbers:\n");
    scanf("%f", &a);
    scanf("%f", &b);

    ab = product(a, b);
    printf("The product is: %f\n", ab);

    productbyref(a, b, &ref_ab);
    printf("The product by reference is: %f\n", ref_ab);

    modifybyref(&a, &b);
    printf("The new values of a and b are:\n%f\n%f", a, b);

    return 0;
}
