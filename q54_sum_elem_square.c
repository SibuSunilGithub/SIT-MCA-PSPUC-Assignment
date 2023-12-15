// Write a program to find out the sum of the squares of the elements of an array...

#include <stdio.h>
int main()
{
    // array and variable initializations
    int arr[20], size, sum = 0;
    printf("Enter Number Of Elements You Want To Enter: ");
    scanf("%d", &size);
    // Taking array input from user..
    printf("Enter %d Elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        sum += (arr[i] * arr[i]); // sum of array elements squares...
    }
    printf("The sum of the squares of the elements is: %d", sum);
    return 0;
}