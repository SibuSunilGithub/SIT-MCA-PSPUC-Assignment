/*
Given an integer, WAP that is displayed by
Example:

12345
2345
345
45
5

*/

#include <stdio.h>
int main()
{
    int num;
    printf("Please Enter A 5 Digit Integer Number:\n");
    scanf("%d", &num);
    printf("%d\n", num);
    printf("%d\n", num % 10000);
    printf("%d\n", num % 1000);
    printf("%d\n", num % 100);
    printf("%d\n", num % 10);
    return 0;
}
