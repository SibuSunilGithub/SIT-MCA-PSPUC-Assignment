// Sorting an array using selection sort method...(Assume 10 Elements Here)

#include <stdio.h>
int main()
{
    // Variable Initialization
    int arr[10], i, j, temp;
    printf("Enter 10 Elements In The Array: ");
    // array input from user..
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Sorting Algorithm for array
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (arr[j] < arr[i])
            {
                // swap elements
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Printing the sorted array...
    printf("The Sorted Array Is: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}