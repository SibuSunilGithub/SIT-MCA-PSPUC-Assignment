// Copy One String To Another By Pointers

#include <stdio.h>
int main()
{
    char str1[31], str2[31], *p1 = str1, *p2 = str2;

    printf("Enter String: ");
    scanf("%[^\n]s", str1);

    while (*p1)
    {
        *p2 = *p1;
        p1++, p2++;
    }
    *p2 = '\0';
    printf("%s\n", str2);
    return 0;
}

/*
Also Use These Conditions
1. while((*p2 = *p1)!='\0')
2. while((*p2)++ = (*p1)++)
*/