// Pointer To Pointer Concept Example(Double Pointer)

#include <stdio.h>
int main()
{
    int a = 10, *p1 = &a;
    int **p2;
    p2 = &p1; // p2 is a pointer which pointing to another pointer.
    printf("a = %d\n", a);
    printf("Address a = %u\n", &a);
    printf("p1 = %d\n", p1);
    printf("Value At p2 = %d\n", *p2);
    printf("p2 Pointing Of a value  = %d\n", **p2);
    return 0;
}