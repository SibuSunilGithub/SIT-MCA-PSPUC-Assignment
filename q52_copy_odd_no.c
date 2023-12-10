// WAP To copy odd numbers of an array to another array...

#include <stdio.h>
int main()
{
    int size, arr[30], odd[30], j = 0; // Array initialization
    printf("Enter The Number Of Elements In The Array: ");
    scanf("%d", &size);
    // Enter Array Elements
    printf("Enter %d Elements In The Array : ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Copy Array algorithm...
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd[j] = arr[i];
            j++;
        }
    }
    // print odd numbers of stored array 
    printf("Odd Numbrs Array Are: ");
    for (int i = 0; i < j; i++)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}
