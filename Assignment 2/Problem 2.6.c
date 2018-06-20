#include <stdio.h>

/*
    JSK-320111
    a2_p6.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main (){
    char input[100];
    double x, y;
    printf("Let variable x be: ", &x);
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d\n", &x);
    printf("Let variable y be: ", &y);
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &y);
    double *ptr_one;
    ptr_one = &x;
    double *ptr_two;
    ptr_two = &x;
    double *ptr_three;
    ptr_three = &y;

    printf("Address of ptr_one: %p\n", ptr_one);
    printf("Address of ptr_two: %p\n", ptr_two);
    printf("Address of ptr_three: %p\n", ptr_three);

    getchar();
    return 0;
}
