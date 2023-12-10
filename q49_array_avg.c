// Find the average value of all the elements of an array (Entry 10 Elements)...

#include <stdio.h>

// Average of array function...
float avg_arr(int arr[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

// Main Function start...
int main()
{
    int size;
    printf("Enter The Size Of Array: ");
    scanf("%d", &size);
    int arr[size]; // I know this is bad practice of initializing array ... but for this specific problem I think  this is correct...

    printf("Enter Elements Of Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Array function calling...
    printf("Average Of Array Elements Are: %f", avg_arr(arr, size));
    return 0;
}