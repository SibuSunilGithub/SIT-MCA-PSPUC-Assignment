// Wap to find out the sum of elements of the left to right diagonal of a 4*4 matrix...

#include <stdio.h>
int main()
{
    int n = 4, mat[n][n], sum = 0;
    printf("Enter The 4 X 4 Matrix Elements: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += mat[i][i];
        }
    }
    printf("Sum of elements of the left to right diagonal is: %d", sum);

    return 0;
}