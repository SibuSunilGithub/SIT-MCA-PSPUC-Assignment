// Write a program to evaluate this algebric function?(Do not use too many brackets)

#include <stdio.h>
int main()
{
    float z;
    int x, y;
    printf("Please Enter The Values Of x and y:\n");
    scanf("%d%d\n", &x, &y);
    z = (3 * y * y * y + 2 * x * x) / (y / 5 + x / 5);
    printf("Answer Is:%f", z);
    return 0;
}
