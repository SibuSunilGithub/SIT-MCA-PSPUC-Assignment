// Findout the first and last +ve number less than 10000 which is divisible by 3, 5, 7, 11...

#include <stdio.h>
int main()
{
    int num = 10000;
    // code for first number
    for (int i = 1; i <= num; i++)
    {
        if (i % (3 * 5 * 7 * 11) == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
    // code for Last number
    for (int i = num; 0<num; i++)
    {
        if (i % (3 * 5 * 7 * 11) == 0)
        {
            printf("%d\n", i);
            break;
        }
    }
}