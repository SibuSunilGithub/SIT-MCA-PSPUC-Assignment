/*
WAP Using Pointer To Search The First Occurance Of A Character In A String. The String And The Character Will Be Entered By The User.
*/

#include <stdio.h>
int main()
{
    char str[50], *strp = str, ch;
    // Enter String By User
    printf("Enter A String: ");
    scanf(" %[^\n]s", str);
    printf("Enter The Character: ");
    scanf(" %c", &ch);

    while (*strp && *strp != ch)
    {
        strp++;
    }

    if (*strp)
    {
        printf("Character Found At %d Index Position\n", strp - str);
    }
    else
    {
        printf("Character Not Exists!\n");
    }

    return 0;
}