// Finds the numbers upto 10K which are divisible by 3, 5, 7, 11 excluding the number divisible by 23...

#include <stdio.h>
int main()
{
    int num = 10000;
    // code for first number
    for (int i = 1; i <= num; i++)
    {
        if (i % (3 * 5 * 7 * 11) == 0 && i % 23 != 0)
        {
            printf("%d\n", i);
        }
    }
}