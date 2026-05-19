#include <stdio.h>

struct Car {

    char make[50];
    char model[50];
    int year;
};

int main(){
    int nth_cars;
    printf("Enter the numbers of cars : ");
    scanf("%d", &nth_cars);


    struct Car cars[nth_cars];

    printf("Enter car info : \n");
    for (int i = 0; i<nth_cars; i++){
        printf("Enter make : ");
        scanf("%s", &cars[i].make);
        printf("Enter model : ");
        scanf("%s", &cars[i].model);
        printf("Enter year : ");
        scanf("%d", &cars[i].year);
    }

    printf("All car info : \n");
    for (int i = 0; i<nth_cars; i++){
        printf("make %s\n: ", cars[i].make);
        printf("model %s\n: ", cars[i].model);
        printf("year %d\n: ", cars[i].year);

    }


    for (int i = 0; i<nth_cars; i++){
        for (int j = 0; j<nth_cars-1)


    }

}