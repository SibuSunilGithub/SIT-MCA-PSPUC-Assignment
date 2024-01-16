// Find The Maximum Of Array Using Pointers...

#include <stdio.h>
// User Defined Function For Max Of Array...
int *max(int *pa, int n)
{
    int *pmax, *pt;
    pmax = pa;
    for (pt = pa + 1; pt < pa + n; pt++)
    {
        if (*pt > *pmax)
        {
            pmax = pt;
        }
    }
    return (pmax);
}
// Main Program...
int main()
{
    int arr[10] = {2, 7, 23, 11, 13, 9, 3, 6, 10, 5}, *ptr;
    ptr = max(arr, 10);
    printf("Maximum Is: %d\n", *ptr);
    return 0;
}