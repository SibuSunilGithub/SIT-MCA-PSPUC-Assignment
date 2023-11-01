/* For a certain electrical circuit with an inductance "L" and resistance "R", the damped natural freequency is given by:
freequency = sqrt((1/LC)-(R^2/4C^2))
It is desired to study the variation of this freequency with "C"(Capacitance).

WAP to calculate the freequency for different values of "C" starting from 0.01 to 0.1.

*/

#include <stdio.h>
#include <math.h>

int main() {
    // Inductance in Henries
    // Resistance in Ohms
    double L = 1.0, R= 10.0,C, frequency;
    for (C = 0.01; C <= 0.1; C += 0.01) {
        frequency = sqrt((1.0 / (L * C)) - ((R * R) / (4.0 * (C * C))));
        printf("Frequency for C = %.2f is %.2f Hz\n", C, frequency);
    }
    return 0;
}


