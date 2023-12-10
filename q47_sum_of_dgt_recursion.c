// Find sum of digits of a numbers using recursion...

#include <stdio.h>
// sum dgt function using recursion
int sum_dgt(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return (n % 10 + sum_dgt(n / 10)); // Logic for sum digit of a numbers
    }
}
// Main function 
int main()
{
    int num;
    printf("Enter A Number:");
    scanf("%d", &num);
    // sum digit func calling
    printf("Sum Of Digits: %d", sum_dgt(num));
    return 0;
}
