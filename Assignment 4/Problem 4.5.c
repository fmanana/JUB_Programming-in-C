#include <stdio.h>

/*
    JTSK-320111
    a4_p5.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

float avg_function(float input[], int count)
{
    float sum = 0.0;
    double avg;
    int i = 0;
    for(i = 0; i < count; i++)
    {
        sum += input[i];
    }
    avg = sum / count;

     return avg;
}

int main()
{
    int j = 0;
    float input[10];
    int count = 0;
    float avg;

    for (j = 0; j < 10; j++)
    {
        scanf("%f", &input[j]);
        if (input[j] == -99.0)
        {
            break;
        }
            else (count++);
    }

    avg = avg_function(input, count);
    printf("The average of these numbers is: %f", avg);

    return 0;
}
