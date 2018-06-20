#include <stdio.h>

/*
    JTSK-320111
    a2_p2.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main(){
    char line[100];
    char value;
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &value);
    printf("%o\n", value);
    printf("%d\n", value);
    printf("%x\n", value);

    getchar();
    return 0;
}
