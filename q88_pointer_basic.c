// Write A Program Understand Basics Of Pointers.

#include <stdio.h>
int main()
{
    int a = 5, b = 25, *ptr;
    ptr = &a;
    printf("Address Of a Is: %d\n", ptr);
    printf("Value At a = %d\n",*ptr);
    ptr = &b;
    printf("Address Of b Is: %d\n", ptr);
    printf("Value At a = %d\n",*ptr);
}