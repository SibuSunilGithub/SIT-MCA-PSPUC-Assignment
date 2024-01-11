// WAP To Read Student Names And Sort Them In Alphabetical Order...

#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, j;
    printf("Enter The Number Of Students: ");
    scanf("%d", &n);
    char name[n][51], temp[51];
    for (i = 0; i < n; i++)
    {
        printf("Enter The Name %d:", i + 1);
        scanf(" %[^\n]s", name[i]);
    }
    // Sort all names by alphabetically...
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    // Print Sorted names...
    printf("\n---------Student Names In Sorted Order---------\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}
