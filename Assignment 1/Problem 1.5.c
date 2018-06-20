#include <stdio.h>

/*
    JTSK-320111
    a1_p5.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main(){
    int x = 2138;
    float y = -52.358925;
    char z = 'G';
    double u = 61.295339487;
    printf("%5d\n", x); /* as x is 4 characters, printing over 9 places requires 5 spaces */
    printf ("%1.5f\n", y); /* as y is 10 characters 1 space is needed */
    printf("%c\n", z);
    printf("%.7f", u);

    getchar();
    return 0;
}
