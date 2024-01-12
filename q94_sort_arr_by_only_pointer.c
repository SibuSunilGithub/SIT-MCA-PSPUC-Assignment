// Sorting Of An Array Using Only Pointer...

#include <stdio.h>
int main()
{
    int n = 5, arr[n], i, j, temp, *p1, *p2;
    printf("Enter %d Elements In Array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Sort array by only pointers
    for (p1 = arr; p1 < arr + n - 1; p1++)
    {
        for (p2 = p1 + 1; p2 < arr + n; p2++)
        {
            // swap by temp variable
            if (*p2 < *p1)
            {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }
    // print the sorted array...
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
