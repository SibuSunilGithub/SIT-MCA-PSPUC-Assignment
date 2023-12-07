/*
A
A B
A B C
A B C D
A B C D E
A B C D E F
*/

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 6; i++)
    {
        char c = 'A';
        for (int j = 0; j < i; j++)
        {
            printf("%c ", c);
            c+=1;
        }
        printf("\n");
    }
}