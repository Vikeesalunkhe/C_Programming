// Write a program to create Two integer Array and concatenate two arrays into a third array.


#include <stdio.h>

void main(){

    int size01;
    printf("Enter Size of Array 01 : ");
    scanf("%d", &size01);

    int arr01[size01];

    printf("Enter array 01 Element : \n");

    for (int i = 0; i<size01; i++) {

        scanf("%d", &(arr01[i]));
    }

    int size02;
    printf("Enter Size of Array 02 : ");
    scanf("%d", &size02);

    int arr02[size02];

    printf("Enter array 01 Element : \n");

    for (int i = 0; i<size02; i++) {

        scanf("%d", &(arr02[i]));
    }

    int arr03[size01+size02];

    for (int i = 0; i<size01; i++){
        arr03[i] = arr01[i];
    }

    for (int i = 0; i<size02; i++){
        arr03[size01 + i] = arr02[i];
    }

    printf("third concated Array : ");

    for (int i = 0; i<(size01+size02); i++){

        printf(" %d |", arr03[i]);
    }


}