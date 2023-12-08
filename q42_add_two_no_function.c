// Using function write a code to add two numbers...

#include <stdio.h>
// sum function defination
int sum(int a, int b)
{
    return a + b;
}
// main Function
int main()
{
    int n1, n2;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &n1, &n2);
    printf("Sum Of %d & %d Is: %d", n1, n2, sum(n1, n2)); // Function calling
    return 0;
}