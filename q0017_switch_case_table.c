/*
Write a program using switch case and construct the table:

Temp        100     115     131
Pressure    25      26.5    30.2
Humidity    37.3    40      27.7

*/

#include <stdio.h>

int main() {
    int row, col;
    printf("Temp\tPressure\tHumidity\n");
    for (row = 0; row < 3; row++) {
        switch (row) {
            case 0:
                printf("100");
                break;
            case 1:
                printf("115");
                break;
            case 2:
                printf("131");
                break;
        }
        for (col = 0; col < 3; col++) {
            switch (col) {
                case 0:
                    printf("\t25");
                    break;
                case 1:
                    printf("\t26.5");
                    break;
                case 2:
                    printf("\t30.2");
                    break;
            }
        }
        printf("\n");
    }
    return 0;
}
