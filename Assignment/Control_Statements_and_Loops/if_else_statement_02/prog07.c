//Calculate profit or loss 

#include <stdio.h>

void main() {

    float sellingPrice, costPrice;
    printf("Enter Selling Price : ");
    scanf("%f", &sellingPrice);
    printf("Enter coast Prince : ");
    scanf("%f", &costPrice);

    if (sellingPrice > costPrice) {

        printf("Profit of %f\n", sellingPrice-costPrice);
    }
    else if(costPrice == sellingPrice) {

        printf("No Profit No Loss\n");
    }
    else {

        printf("loss of %f\n", costPrice-sellingPrice);
    }
    

}