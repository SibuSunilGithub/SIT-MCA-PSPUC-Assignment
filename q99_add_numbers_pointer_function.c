// Add Two Numbers By Using Pointer And Functions

#include <stdio.h>
// Add Function With pointers
int add(int *pa, int *pb, int *psum) // Pass By Reference Method
{
    *psum = *pa + *pb;
}

// Main Function
int main()
{
    int a, b, sum;

    printf("Enter Two Numbers: ");
    scanf("%d%d", &a, &b);

    add(&a, &b, &sum);
    printf("Sum Of %d & %d Is: %d", a, b, sum);

    return 0;
}