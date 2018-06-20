#include <stdio.h>

/*
    JTSK-320111
    a1_p1.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main () {

	double result; /* The result of our calculation */
	result = (3+1)/5.0; /* until a decimal is added to one of the constants the function will return an integer value */
	printf ("The value of 4/5 is %lf\n", result);

	getchar();
	return 0;
}
