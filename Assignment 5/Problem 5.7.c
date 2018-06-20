/*
    JTSK-320111
    a5_p7.c
    Fezile Manana
    f.manana@jacobs-university.de
*/

#include <stdio.h>

void print_matrix(int matrix [30][30], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void main_diagonal(int matrix[30][30], int n)
{
    int i, j;
    //rows and columns iterators
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if(i > j)
                printf("%d", matrix[i][j]);
        }
    }
    printf("\n");
}

int main()
{
    int matrix [30][30];
    int n, i, j;

    printf("Please enter the number of rows and columns for your matrix:\n");
    scanf("%d", &n);
    printf("Enter the elements in your matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The entered matrix is:\n");
    print_matrix(matrix, n);
    printf("Under the main diagonal: \n");
    main_diagonal(matrix, n);

    return 0;
}
