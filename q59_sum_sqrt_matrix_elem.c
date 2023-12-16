// WAP to findout the sum of square roots of a 3*3 matrix upto 4 places of a decimal?

#include <stdio.h>
#include <math.h>
int main()
{
    int row, col, mat[10][10];
    double sum_sqrt = 0.0;
    printf("Enter The Row & Col Of The Matrix: ");
    scanf("%d%d", &row, &col);
    // Enter Matrix Elements
    printf("Enter Matrix Elements: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum_sqrt += sqrt(mat[i][j]);
        }
    }
    printf("Sum Of All Elements Square Roots Is: %.1f", sum_sqrt);
}