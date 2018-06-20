#include <stdio.h> /* There was no "#" before "include", causing a compiler error */

/*
    JTSK-320111
    a1_p3.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; /* "b" needs to be defined as a float not an integer */
    result = a / b;
    printf("The result is %f\n", result); /* replaced "%d" with "%f" as "%d" only prints integers and "%f" will print a float*/

    getchar();
    return 0;
}
