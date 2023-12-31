// WAP To Find The Value Of e^x = 1 + x + (x^2/2!) + (x^3/3!) + ... Taylor Series ... Upto n.

#include <stdio.h>

float exponential(int n, float x)
{
    float sum = 1.0; // initialize sum of series

    for (int i = n - 1; i > 0; --i)
        sum = 1 + x * sum / i;

    return sum;
}

// Main Function...
int main()
{
    int n;
    float x;
    printf("Enter The Value Of x: ");
    scanf("%f", &x);
    printf("Enter The Value Of n: ");
    scanf("%d", &n);
    printf("e^x = %f", exponential(n,x));
    return 0;
}
