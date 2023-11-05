// WAP to input 20 numbers and findout how many of them are odd or even...

#include <stdio.h>
int main()
{
    int i, num, even = 0, odd = 0;
    for (i = 1; i <= 20; i++)
    {
        printf("Enter Number: \n");
        scanf("%d", &num);
        if (num % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    printf("Odd Number: %d\n", odd);
    printf("Even Number: %d\n", even);
    return 0;
}