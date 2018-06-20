#include <stdio.h>

/*
    JTSK-320111
    a1_p4.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main(){
    int x = 17;
    int y = 7;
    int sum;
    int product;
    float difference;
    float division;
    int remainder;
    sum = x + y;
    product = x * y;
    difference = x - y;
    division = x / (float)y;
    remainder = x % y;

    printf("The sum of x and y is %d\n", sum);
    printf("The product of x and y is %d\n", product);
    printf("The difference of x and y is %0.0f\n", difference);
    printf("The division of x and y is %f\n", division);
    printf ("The remainder of x / y is %d\n", remainder);

    getchar();
    return 0;
}
