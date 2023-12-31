// WAP To Findout The Maximum Of An Array Using User Defined Array Function.

#include <stdio.h>
// user defined array func...
int max_arr(int arr[], int n)
{
    int max;
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n, i;
    printf("Number Of Input Elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d Elements In The Array: ",n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Maximum Array Element Is: %d", max_arr(arr, n));
    return 0;
}