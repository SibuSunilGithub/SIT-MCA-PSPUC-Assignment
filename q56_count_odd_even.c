/* Given an array of size 10 :
i) Count the number of odd numbers.
ii) Count the number of even numbers.
*/

#include <stdio.h>
int main()
{
    int size, odd = 0;
    printf("Enter Number Of Elements You Want To Enter: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d Elements: ", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    printf("The Odd Numbers Is: %d\n", odd);
    printf("The Even Numbers Is: %d\n", size - odd);
    return 0;
}