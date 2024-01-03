// Sorting Of An Array Using Pointer...

#include <stdio.h>
int main()
{
    int n = 10, arr[n], i, j, temp;
    printf("Enter %d Elements In Array: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting array by pointer
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(arr + j) < *(arr + i))
            {
                // Swap Logic by temp variable
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
    // printing sorted array...
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
