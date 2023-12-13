// C Pointer Program To Add Two Numbers ( Optimized Of Previous Question).

#include <stdio.h>
int main()
{
    int a, b, *pa = &a, *pb = &b;
    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);
    printf("Sum Is: %d", *pa + *pb);
    return 0;
}