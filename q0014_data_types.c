/*
Write a program to print the size of various data types in C.
*/

#include <stdio.h>
int main()
{
    short int si = 2;
    unsigned short int usi = 2;
    unsigned int ui = 1;
    int i = 25;
    long int li = 5;
    unsigned long int uli = 2;
    long long int lli = 23;
    unsigned long long int ulli = 23;
    char ch = 'A';
    signed char sc = 's';
    unsigned char usc = 's';
    float f = 1.3;
    double d = 2;
    long double ld = 2;

    printf("Data Types Of Short Int Is %d Bytes\n", sizeof(i));
    printf("Data Types Of unsigned short int Is %d Bytes\n", sizeof(usi));
    printf("Data Types Of unsigned int Is %d Bytes\n", sizeof(ui));
    printf("Data Types Of int Is %d Bytes\n", sizeof(i));
    printf("Data Types Of long int Is %d Bytes\n", sizeof(li));
    printf("Data Types Of unsigned long int Is %d Bytes\n", sizeof(uli));
    printf("Data Types Of long long int Is %d Bytes\n", sizeof(lli));
    printf("Data Types Of unsigned long long int Is %d Bytes\n", sizeof(ulli));
    printf("Data Types Of char Is %d Bytes\n", sizeof(ch));
    printf("Data Types Of signed char Is %d Bytes\n", sizeof(sc));
    printf("Data Types Of float Is %d Bytes\n", sizeof(f));
    printf("Data Types Of double Is %d Bytes\n", sizeof(d));
    printf("Data Types Of long double Is %d Bytes\n", sizeof(ld));
    return 0;
}
