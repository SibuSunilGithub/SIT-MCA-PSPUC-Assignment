// WAP To Interchange The First And 4th Column Of A 6 X 4 Matrix...

#include <stdio.h>
int main()
{
    int i, j, mat[6][4], temp;
    printf("Enter The 6 X 4 Matrix Elements: ");
    // Taking matrix input
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // Before interchange matrix is
    printf("Before Interchange\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    // Interchange matrix columns
    for (i = 0; i < 6; i++)
    {
        temp = mat[i][0];
        mat[i][0] = mat[i][3];
        mat[i][3] = temp;
    }
    // After Interchange Matrix
    printf("After Interchange\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}