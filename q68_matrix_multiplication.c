// WAP To Multiply Two Square Matrix...

#include <stdio.h>

int main()
{
    // Declare all variables
    int mat1[20][20], mat2[20][20], mat3[20][20] = {0}, n, i, j, k;
    printf("Enter The Dimensin Of The Matrix: ");
    scanf("%d", &n);
// Input First Matrix...
    printf("Enter The First Matrix Elements: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Input Second Matrix...
    printf("Enter The Second Matrix Elements: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Multiply Two Matrix...

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < n; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    // Print Answer Matrix
    printf("Matrix After Multiplication Is\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d", mat3[i][j]);
        }
        printf("\n");
    }
    return 0;
}