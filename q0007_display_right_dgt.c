/*Write a program to read a float number and display the right most digit of the integer part of the number...

Example: 345.67 ---> 5
*/

#include <stdio.h>
int main()
{
    float num1;
    int num2;
    printf("Please Enter A Float  Number:\n");
    scanf("%f", &num1);
    num2 = num1;
    printf("Right Most Digit Of The Integer Part Is:%d", num2 % 10);
    return 0;
}
