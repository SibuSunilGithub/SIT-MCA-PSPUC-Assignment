/*
Given three values, write a program to read three values from keyboard and print out the largest of them without using if statements...
*/

#include <stdio.h>
int main()
{
    int a, b, c, ans;
    printf("Enter Three Numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    ans = (a > b && a > c) ? a : (b > a && b > c) ? b
                                                  : c;
    printf("Largest Is:%d", ans);
    return 0;
}