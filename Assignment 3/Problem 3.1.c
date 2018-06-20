#include <stdio.h>

/*
    JTSK-320111
    a3_p1.c
    Fezile Manana
    f.manana@jacobs-universiity.de
*/

int main ()
{
	int i = 8;
	while (i >= 4){ /*curly braces to indicate condition group*/
		printf("i is %d\n", i);
		i--;
	}
	printf("That's it.\n");

	return 0;
}
