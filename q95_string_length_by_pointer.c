// Find The String Length By Using Pointer...

#include <stdio.h>
int main()
{
    int len;
    char str[50], *strp = str;
    printf("Enter A String: ");
    scanf("%[^\n]s", str);
    while (*strp != '\0')
    {
        strp++;
    }
    printf("String length Is: %d", len = strp - str);
    return 0;
}