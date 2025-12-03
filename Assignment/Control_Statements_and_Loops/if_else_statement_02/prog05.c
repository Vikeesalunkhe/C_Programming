// Write a prigram to calculate electricity bill according to units consumed.

#include <stdio.h>

void main() {

    int units;
    printf("Enter your units : ");
    scanf("%d", &units);

    double bill = 0;

    if (units <= 100) {

        bill = units*5;
    } else if (units <= 300) {

        bill = (100*5) + ((units-100)*7);   //5rs for first 100 units, 7rs for thext 200 units
    } else {

        bill = (100*5) + (200*7) + ((units-300)*10);   //5rs for first 100 units, 7rs for thext 200 units, 10rs for next until above 300 units,
    }

    printf("Total Electricity bill for %d units is IND Rupees: %f\n", units, bill);

}