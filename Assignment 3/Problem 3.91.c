#include <stdio.h>

int main()
{
    char c;
    int n;
    int i = 0;
    double Temp[100];
    double Temp_C[n];

    float sum = 0;
    float list;
    double Fahrenheit;
    double mean;

    printf("Please enter a character: \n");
    scanf("%c", &c);
    printf("Please enter an integer: \n");
    scanf("%d", &n);
    printf("Please enter as many temperatures, in Celsuis,");
    printf(" as the integer number you just entered:\n");
    do
    {
        scanf("%lf", &Temp_C[i]);
        i++;
    } while (i + 1 <= n);

    if (c == 's')
    {
        for (i = 0; i + 1 <= n; i++)
        {
            sum = sum + Temp_C[i];
        }// loop to produce the sum
        printf("The sum of these temperatures is: %lf", sum);
    }
        else if (c == 'p')
        {
            for (i = 0; i + 1 <= n; i++)
            {
                printf("%lf\n", Temp_C[i]);
            }
        }
        else if (c == 't')
        {
            for (i = 0; i + 1 <= n; i++)
            {

            }
        }


    return 0;
}
