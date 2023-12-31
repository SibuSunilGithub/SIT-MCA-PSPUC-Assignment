// Find The Length Of The String Using String Library Function.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[51];
    printf("Enter The String: ");
    scanf("%[^\n]s", str);
    printf("String Length Is: %d", strlen(str));
    return 0;
}