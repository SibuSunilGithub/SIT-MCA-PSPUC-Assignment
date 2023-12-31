// WAP To Print All The Prime Numbers Between Specified Range?

#include <stdio.h>
// Check Prime
int check_prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

// Main function
int main()
{
    int start, end, i;
    printf("Enter The Range (Start, End): ");
    scanf("%d%d", &start, &end);
    for (i = start; i <= end; i++)
    {
        if (check_prime(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}