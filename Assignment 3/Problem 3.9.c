#include <stdio.h>

int main()
{
    char c;
    int n;
    int i = 0;
    double Temp[100];
    double Temp_C[n]; //Array storing 'n' doubles

    float sum = 0;
    float list;
    float Fahrenheit;
    float mean;


    printf("Please enter a character: \n");
    scanf("%c", &c);
    printf("Please enter an integer: \n");
    scanf("%d", &n);
    printf("Please enter as many temperatures, in Celsuis,\n");
    printf("as the integer number you just entered:\n");
    scanf("%lf", &Temp_C[100]);

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
            printf("The list of temperatures is:\n%lf\n", Temp[100]);
        }
        else if (c == 't')
        {
            for (i = 0; i <= n; i++)
            {
                Fahrenheit = ((9.0/5.0) * Temp_C[i]) + 32;
            }// loop for calculating Fahrenheit
            printf("These temperatures in Fahrenheit are:\n %lf\n", Fahrenheit);
        }
        else
        {
            for (i = 0; i <= n; i++)
            {
                mean = Temp_C[i] / n;
            }// loop for calculating the mean
            printf("The mean of the Temperatures is: %lf\n", mean);
        }

    return 0;
}
