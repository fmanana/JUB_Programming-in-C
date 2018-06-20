#include <stdio.h>

/*
    JTSK-320111
    a2_p4.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main(){
    char input[100];
    float a, b, h;
    printf("Let side a be: ", &a);
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &a);
    printf("Let side b be: ", &b);
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &b);
    printf("Let side h be: ", &h);
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%f", &h);

    float square = a * a;
    float rectangle = a * b;
    float traingle = 0.5 * a * h;
    float trapezoid = 0.5 * (a + b) * h;
    printf("Area of square: %f", square);
    printf("\nArea of rectangle: %f", rectangle);
    printf("\nArea of triangle: %f", traingle);
    printf("\nArea of trapezoid: %f", trapezoid);

    getchar();
    return 0;
}
