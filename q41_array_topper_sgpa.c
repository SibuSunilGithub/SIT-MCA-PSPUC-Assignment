/*
WAP In C Language With Using Array To Find The Topper SGPA And Roll Number (Data Input By User)...
*/

#include <stdio.h>
int main()
{
    float sgpa[60], highest = 0.0;
    int i, roll = 0;
    for (i = 0; i < 60; i++)
    {
        printf("Enter SGPA Of Roll No %d\n", i + 1);
        scanf("%f", &sgpa[i]);
    }
    for (i = 0; i < 60; i++)
    {
        if (sgpa[i] > highest)
        {
            highest = sgpa[i];
            roll = i + 1;
        }
    }
    printf("Roll Number %d Is Topper And He Has %.2f SGPA", roll, highest);
    return 0;
}