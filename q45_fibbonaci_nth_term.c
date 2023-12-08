// Find nth term of the fibbonaci series...

#include <stdio.h>
// function of fibonacci series no found
int fibo(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}
// main function start
int main()
{
    int num, ans;
    // user input nth position
    printf("Enter The Number: ");
    scanf("%d", &num);
    // fibo function calling
    printf("%dth term of fibonacci series is: %d", num, fibo(num));
    return 0;
}