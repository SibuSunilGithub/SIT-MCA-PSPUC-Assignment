// WAP to print the digits of a numbers in words...

#include <stdio.h>

int main() {
    char N[100];
    printf("Enter a number: ");
    scanf("%s", N);
    // Modify The logic to integer number condition ...
    for (int i = 0; N[i] != '\0'; i++) {
        switch (N[i]) {
            case '0':
                printf("Zero ");
                break;
            case '1':
                printf("One ");
                break;
            case '2':
                printf("Two ");
                break;
            case '3':
                printf("Three ");
                break;
            case '4':
                printf("Four ");
                break;
            case '5':
                printf("Five ");
                break;
            case '6':
                printf("Six ");
                break;
            case '7':
                printf("Seven ");
                break;
            case '8':
                printf("Eight ");
                break;
            case '9':
                printf("Nine ");
                break;
        }
    }
    return 0;
}
