#include <stdio.h>

/*
    JTSK-320111
    a3_p3.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main(){
    char c;
    scanf("%c", &c);

    if (c >= 48 && c <= 57 ){   /*values obtained from ASCII table*/
        printf("The input is a digit\n");
    }
        else if (c >= 65 && c <= 90){
            printf("The input is an upper case letter\n");
        }
        else if (c >= 97 && c <= 122){
            printf("The input is a lower case letter\n");
        }
        else
            printf("The input is a symbol\n");

    return 0;
}
