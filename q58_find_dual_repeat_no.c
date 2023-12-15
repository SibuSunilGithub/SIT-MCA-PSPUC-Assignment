/*
There is an array of size 10 containing numbers from 1 to 9,
with one element repeated.Findout the repeated number.
*/

#include <stdio.h>
int main()
{
    int arr_sum = 0, full_sum = 0, arr[] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9}; // Missing Number Is: 7

    for (int i = 0; i < 10; i++)
    {
        arr_sum += arr[i];
    }
    for (int j = 1; j < 10; j++)
    {
        full_sum += j;
    }
    printf("Dual Repeated Number In The Given Array Is: %d\n", arr_sum - full_sum);
}