#include <stdio.h>

/*
    JTSK-320111
    a2_p3.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main(){
    char time[100];
    int weeks, days, hours;
    printf("Enter weeks: ", &weeks);
    fgets(time, sizeof(time), stdin);
    sscanf(time, "%d", &weeks);
    printf("\nEnter days: ", &days);
    fgets(time, sizeof(time), stdin);
    sscanf(time, "%d", &days);
    printf("\nEnter hours: ", &hours);
    fgets(time, sizeof(time), stdin);
    sscanf(time, "%d", &hours);

    int weeksTodays = ((weeks * 7) * 24);
    int daysTohours = (days * 24);
    int Totalhours = weeksTodays + daysTohours + hours; /* having 3 separate equations makes the steps easier to follow */
    printf("\nTotal hours: %d", Totalhours);

    getchar();
    return 0;
}
