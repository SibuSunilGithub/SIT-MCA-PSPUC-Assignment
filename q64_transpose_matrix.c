// WAP To Transpose A Matrix...

#include <stdio.h>
int main()
{
    int i, j, m, n, temp,mat[10][10], trans[10][10];
    printf("Enter The Dimention Of The Matrix(m,n): ");
    scanf("%d%d", &m, &n);
    printf("Enter The %d X %d Matrix Elements: ", m, n);
    // Taking matrix input
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // Before Transpose matrix is
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

    // Trans Pose Logic With Swap
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
    // After interchange matrix is
    printf("\nAfter Interchange\n");
    for (i = 0; i < n; i++) // Change Row & Col
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", mat[j][i]); // Carefully Use Dimention
        }
        printf("\n");
    }
    return 0;
}
