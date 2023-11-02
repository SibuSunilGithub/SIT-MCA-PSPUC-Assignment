// Find factorial of a number using while loop...

#include <stdio.h>
int main()
{
    int num, fact = 1, i = 1;
    printf("Enter Integer Number:\n");
    scanf("%d", &num);
    while (i <= num)
    {
        fact *= i;
        i++;
    }
    printf("Factorial Of %d Is: %d", num, fact);
    return 0;
}