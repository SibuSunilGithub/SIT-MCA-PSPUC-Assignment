// Add Two Matrix And Store The Result In Thard Matrix...

#include <stdio.h>
int main()
{
    int i, j, m, n, mat1[20][20], mat2[20][20], res[20][20];
    printf("Enter The Dimention Of The Matrix(m,n): ");
    scanf("%d%d", &m, &n);
    // Input First Matrix...
    printf("Enter The Element Of The First Matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Input Second Matrix...
    printf("Enter The Element Of The Second Matrix: ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Adding Two Matrix...
    printf("\nResult Matrix: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            res[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}