// WAP To Interchange First And Last Rows Of A Matrix?(Any Dimentional)

#include <stdio.h>
int main()
{
    int i, j, m, n, temp;
    printf("Enter The Dimention Of The Matrix(m,n): ");
    scanf("%d%d", &m, &n);
    int mat[m][n];
    printf("Enter The %d X %d Matrix Elements: ", m, n);
    // Taking matrix input
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // Before interchange matrix is
    printf("\nBefore Interchange\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // After Interchange
    for (j = 0; j < n; j++)
    {
        temp = mat[0][j];
        mat[0][j] = mat[m - 1][j];
        mat[m - 1][j] = temp;
    }

    // After interchange matrix is
    printf("\nAfter Interchange\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
