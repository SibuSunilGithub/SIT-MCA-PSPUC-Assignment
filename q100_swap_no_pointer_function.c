// Swap Two Number By Pointer Using Function

#include <stdio.h>
// swap Function With Pointer
void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
// Main Program...
int main()
{
    int a, b;

    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);

    printf("Before Swap : %d %d\n", a, b);
    swap(&a,&b);
    printf("After Swap : %d %d\n", a, b);
    return 0;
}