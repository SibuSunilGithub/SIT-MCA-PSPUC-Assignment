// WAP To Count Number Of Words In A Line Entered By The User Using A User Defined Function...

#include <stdio.h>
// User defined function for count words in a string...
int count_word(char str[])
{
    int i, nw = 0;
    for (i = 0; str[i]; i++) // 
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            nw++;
        }
    }
    return ++nw;
}
// Main Program Start...
int main()
{
    char str[51];
    printf("Enter String: ");
    scanf("%[^\n]s", str);
    printf("Total Words: %d", count_word(str));
    return 0;
}