// Given the values of 5 variables and write a program to rotate their values...
/*
Example:
Before Rotate:  a=10, b=20, c=30, d=40, e=50
After Rotate:  a=50, b=10, c=20, d=30, e=40
*/

#include <stdio.h>
int main()
{
    int a = 10, b = 20, c = 30, d = 40, e = 50, temp;
    temp = e;
    e = d;
    d = c;
    c = b;
    b = a;
    a = temp;
    printf("After Rotate: %d %d %d %d %d", a, b, c, d, e);
    return 0;
}