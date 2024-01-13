#include <stdio.h>
int main()
{
    char str[21], *p, *q, temp;
    printf("Enter String: ");
    scanf("%[^\n]s", str);
    p = q = str;

    while (*q)
    {
        q++;
    }
    q--;

    while (p < q)
    {
        temp = *p;
        *p = *q;
        *q = temp;
        p++;
        q--;
    }
    printf("Reverse String Is: %s\n", str);
    return 0;
}