// Find factorial of a number using for loop...

#include <stdio.h>
int main()
{
    int num, fact = 1;
    printf("Enter Integer Number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("Factorial Of %d Is: %d", num, fact);
    return 0;
}