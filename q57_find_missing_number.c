/* 
There is an array of size 10 containing numbers from 1 to 11 in
sorted order, with one number missing. Find out the missing number?
(Hint: make sum and minus array sum)
*/

#include <stdio.h>
int main()
{
    int arr_sum = 0, full_sum = 0, arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11}; // Missing Number Is: 7
    for (int i = 0; i < 10; i++)
    {
        arr_sum += arr[i];
    }
    for (int j = 1; j <= 11; j++)
    {
        full_sum += j;
    }
    printf("Missing Number In The Given Array Is: %d\n", full_sum - arr_sum);
}