// Find out the numbers between 1 - 10000, which are divisible by the sum of its digits ?

#include <stdio.h>

// User defined function for the sum of its digits Of Numbers

int sum_dgt(int n)
{
    int i, sum = 0;
    while (n != 0)
    {
        i = n % 10;
        sum += i;
        n /= 10;
    }
    return sum;
}

// main program

int main()
{
    int num = 10000;
    for (int i = 1; i <= num; i++)
    {
        if (i % sum_dgt(i) == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}