#include <stdio.h>

int main()
{
    char c;
    int n;
    int i = 0;
    double Temp_C[n];

    float sum = 0;
    float list;
    double Fahrenheit(double Temp_C);
    float mean;

    printf("Please enter a character: \n");
    scanf("%c", &c);
    printf("Please enter an integer: \n");
    scanf("%d", &n);// 'n' assigns the number of elements in the array
    printf("Please enter as many temperatures, in Celsuis,");
    printf(" as the integer number you just entered:\n");
    do
    {
        scanf("%lf", &Temp_C[i]);
        i++;
    } while (i + 1 <= n);

    for (i = 0; i + 1 <= n; i++)
    {
        switch (i)
        {
            case 1:
                if (c == 's')
                {
                    sum = Temp_C[i] + Temp_C[i + 1];
                    printf("The sum of these temperatures is: %lf", sum);
                }
            case 2:
                while (c == 'p')
                {
                    printf("The list of temperatures is:\n");
                    printf("%lf\n", Temp_C[i]);
                    break;
                }

        }
    }
    return 0;
}
