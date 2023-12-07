// Wap to convert decimal to binary...

#include <stdio.h>

int main()
{
    int num, rem;
    printf("Enter the decimal number:\n");
    scanf("%d", &num);
    int a[10];
    int i = 0;
    if (num < 0)
    {
        printf("Invalid entry!!!");
    }
    else if (num == 0)
    {
        printf("0");
    }
    else
    {
        while (num)
        {
            rem = num % 2;
            num = num / 2;
            a[i] = rem;
            i++;
        }

        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
        return 0;
    }
}