#include <stdio.h>

/*
    JSK-320111
    a2_p5.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main(){
    char input[100];
    int a;
    fgets(input, sizeof(input), stdin);
    sscanf (input, "%d\n", &a);
    printf("%d\n", a);

    int *ptr_a;
    ptr_a = &a;
    printf("%p\n", ptr_a);
    *ptr_a = *ptr_a + 5;
    printf("%d\n", *ptr_a);

    getchar();
    return 0;
}
