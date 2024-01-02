// Write A Program To Find Sum Of An Array Using Pointer.

#include <stdio.h>
int main()
{
    int n = 5, arr[n], i, *ptr, sum = 0;
    printf("Enter %d Elements In Array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (ptr = arr; ptr < arr + n; ptr++)
    {
        sum += *ptr;
    }
    printf("Sum Of All Elements Of The Array Is: %d", sum);
    return 0;
}
