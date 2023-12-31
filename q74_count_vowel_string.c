// WAP To Count The Number Of Vowels In A String With User Defined Functions

#include <stdio.h>
// Count Vowel Function For String
int count_vowel(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
    }
    return count;
}
// Main function...
int main()
{
    char str[51];
    printf("Enter A String: ");
    scanf("%[^\n]s", str);
    printf("Number Of Vowel Is: %d\n", count_vowel(str));
    return 0;
}