// Find x^n using Recursion

#include <stdio.h>
// function
float power(float x, float n)
{
    if (n == 1)
    {
        return x;
    }
    else
    {
        return x * power(x, n - 1);
    }
}
// main function start
int main()
{
    float x, n;
    printf("Enter The Value Of x & n: ");
    scanf("%f%f", &x, &n);
    // power function call
    printf("Power x^n Is: %.1f", power(x, n));
    return 0;
}