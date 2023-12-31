// WAP To Store 60 Student Name In 2D Array?

#include <stdio.h>
int main()
{
    char name[60][51];
    printf("Enter 60 Student Names\n-------------------------\n");
    for (int i = 0; i < 60; i++)
    {
        scanf("%[^\n]s", name[i]);getchar();
    }
    printf("Student List\n----------------------\n");
    for (int i = 0; i < 60; i++)
    {
        printf("%s\n", name[i]);
    }
    return 0;
}