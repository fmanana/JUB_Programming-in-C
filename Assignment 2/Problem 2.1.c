#include <stdio.h>

/*
    JTSK-320111
    a2_p1.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

int main (){
    char input[100];
    double value1, value2;
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%lf", &value1);
    fgets (input, sizeof(input), stdin);
    sscanf(input, "%lf", &value2);
    double sum = value1 + value2;
    double difference = value1 - value2;
    double squareOfFirst = value1 * value1;
    printf("%lf\n", sum);
    printf("%lf\n", difference);
    printf("%lf\n", squareOfFirst);

    char second[100];
    int output1, output2;

    fgets(second, sizeof(second), stdin);
    sscanf(second, "%d", &output1);
    fgets(second, sizeof(second), stdin);
    sscanf(second, "%d", &output2);
    int sum2 = output1 + output2;
    int product = output1 * output2;
    printf("%d\n", sum2);
    printf("%d\n", product);

    char third[100];
    char out3, out4;
    fgets(third, sizeof(third), stdin);
    sscanf(third, "%c", &out3);
    fgets(third, sizeof(third), stdin);
    sscanf(third, "%c", &out4);
    char sum3 = out3 + out4;
    char product2 = out3 * out4;
    printf("%lf\n", sum3);
    printf("%lf\n", product2);
    printf("%c\n", product2);
    printf("%c\n", sum3);


    getchar();
    return 0;
}
