// WAP Using switch case to give 0.25% extra interest, if the person is a senior citizen...

#include <stdio.h>

int main() {
    float amount, rate, time, interest;
    char senior_citizen;

    printf("Enter the amount: ");
    scanf("%f", &amount);

    printf("Enter the rate: ");
    scanf("%f", &rate);

    printf("Enter the time: ");
    scanf("%f", &time);

    printf("Are you a senior citizen? (Y/N): ");
    scanf(" %c", &senior_citizen);

    switch (senior_citizen) {
        case 'Y':
        case 'y':
            rate += 0.25;
            break;
        case 'N':
        case 'n':
            break;
        default:
            printf("Invalid Input!\n");
            return 1;
    }

    interest = (amount * rate * time) / 100.0;

    printf("Interest = %.2f\n", interest);

    return 0;
}
