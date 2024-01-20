/*
WAP to compute EOQ and TBO given demand rate (items per unit time), setup cost(per order), and the holding cost (per item per unit time).
In inventory management, the economic order quantity for a single item is given by:
EOQ = sqrt((2*demandrate*setupcosts) / (holding cost per item per unit time))
and the optimal time between orders:
TBO = sqrt((2*setupcost)/(demand rate* holding cost per item per unit time))
*/

#include <stdio.h>
#include <math.h>
int main()
{
    float eoq, tbo, dmd_rate, setup_cost, hold_cost;
    printf("Please Enter Demand Rate:\n");
    scanf("%f", &dmd_rate);
    printf("Please Enter Setup Cost:\n");
    scanf("%f", &setup_cost);
    printf("Please Enter Holding Cost:\n");
    scanf("%f", &hold_cost);

    eoq = sqrt((2 * dmd_rate * setup_cost) / hold_cost);
    tbo = sqrt((2 * setup_cost) / (dmd_rate * hold_cost));

    printf("EOQ = %.2f\nTBO = %.2f", eoq, tbo);
    return 0;
}
