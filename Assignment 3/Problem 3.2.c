#include <stdio.h>

/*
    JTSK-320111
    a3_p2.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main(){
    int n;
    scanf("%d", &n);
     if (n % 2 == 0 && n % 7 == 0){
        printf("The number is divisible by 2 and 7");
     }
        else {
            printf("The number is NOT divisible by 2 and 7");
        }

    getchar();
    return 0;
}
