// WAP To Find The Maximum Element In The Matrix...

#include <stdio.h>
#define MAX 100
int max_matrix(int mat[MAX][MAX], int row, int col)
{
    int i, j, m = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (mat[i][j] > m)
            {
                m = mat[i][j];
            }
        }
    }
    return m;
}
// main program start...
int main()
{
    int i, j, row, col, mat[MAX][MAX];
    printf("Enter The Row & Col Of The Matrix: ");
    scanf("%d%d", &row, &col);
    printf("Enter The Matrix Elements: ");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Maximum Element In The Array Is: %d", max_matrix(mat, row, col));
    return 0;
}
