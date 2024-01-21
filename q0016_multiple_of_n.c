/*
Write a program to read two integer values m and n and to decide and print whether m is a multiple of n...
*/

#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter Two Numbers:\n");
    scanf("%d%d", &m, &n);
    if (n % m == 0)
    {
        printf("%d is a multiple of %d", m, n);
    }
    else{
        printf("%d is not a multiple of %d", m, n);
    }
    return 0;
}
