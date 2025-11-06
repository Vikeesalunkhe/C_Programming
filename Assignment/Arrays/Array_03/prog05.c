// write a program to create two N numbers of integer Array, check the two array element are equal.


#include <stdio.h>

void main() {

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

    int count = 0;

    if (size01 == size02) {

        for (int i = 0; i<size01; i++) {

            if (arr01[i] == arr02[i]) {

                count += 0;
            } else {

                count += 1;
                break;
            } 
        }
    } else {

        printf("Array 01 and 02 Size Are not Equals");
    }

    if (count>0) {

        printf("Array Elements Are not Same\n");
    } else {
        
        printf("Array Elements Are Same\n");

    }

}