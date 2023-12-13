// C Pointer Program To Add Two Numbers...

#include <stdio.h>
int main()
{
    int a, b, *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Enter Two Number: ");
    scanf("%d%d", &a, &b);
    printf("Sum Is: %d", *pa + *pb);
    return 0;
}