// WAP To Input A String And Print It On Screen

#include <stdio.h>
int main()
{
    int i = 0;
    char str[31];
    printf("Enter Your Name: ");
    scanf("%[^\n]s", str);
    printf("Hi %s\n");
    return 0;
}