// WAP To Print The Full Name Of The User From First Name And Last Name.

#include <stdio.h>
int main()
{
    char fname[31], lname[31], full_name[71];
    int i, j;

    printf("Enter The First Name: ");
    scanf("%s", fname);
    printf("Enter The Last Name: ");
    scanf("%s", lname);

    for (i = 0; i < fname[i]; i++)
    {
        full_name[i] = fname[i];
    }
    full_name[i] = ' ';
    i++;

    for (j = 0; j < lname[j]; i++, j++)
    {
        full_name[i] = lname[j];
    }
    full_name[i] = '\0';
    printf("Your Full Name Is: %s\n", full_name);
    return 0;
}