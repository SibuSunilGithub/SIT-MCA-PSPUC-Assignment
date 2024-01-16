// Findout The Largest Of Three Numbers Through Functions Using Pointers.

#include <stdio.h>

// Lagre Function with pointer...
int *largest(int *p1, int *p2, int *p3)
{
    if (*p1 > *p2 && *p1 > *p3)
    {
        return (p1);
    }
    else if (*p2 > *p1 && *p2 > *p3)
    {
        return (p2);
    }
    else
    {
        return (p3);
    }
}

// Main Programs Start
int main()
{
    int a, b, c, *pl;
    printf("Enter Three Numbeers: ");
    scanf("%d%d%d", &a, &b, &c);
    pl = largest(&a, &b, &c);
    printf("Largest Is: %d\n", *pl);
    return 0;
}