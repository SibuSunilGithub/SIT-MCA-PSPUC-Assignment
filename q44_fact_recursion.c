// Find factorial of a number using recursion...

#include <stdio.h>
// factorial recursive function description
int fact(int n)
{
    if (n == 1 || n == 0)
    { // stopping condition for recursive function
        return 1;
    }
    else
    {
        return n * fact(n - 1); // factorial formula
    }
}
int main()
{
    int num;
    printf("Enter Number: "); // taking input from user
    scanf("%d", &num);
    // fact function calling...
    printf("Factorial Of %d Is: %d", num, fact(num));
    return 0;
}