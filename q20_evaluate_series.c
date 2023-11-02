/* 
Findout/ Evaluate the following series...

1/x + 1/x^2 + 1/x^3 + .... + 1/x^n

x and n entered by user x is real no and n max is 10.

*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += 1 / pow(x, i);
    }

    printf("Sum of the series is: %f\n", sum);

    return 0;
}

