////Write a Program to create an char Array, print Alternet Elements.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    char arr[size];
    getchar();

    for (int i = 0; i < size; i++) {

        printf("Enter Array Elements for %d index : ", i);
        scanf("%c", &(arr[i]));
        getchar();
    }

    printf("Array Created Sucseccfully \n");

    for (int i = 0; i<size; i++) {

        if (i % 2 ==0 ) {
            
            printf(" %c |", arr[i]);

        }

    }

}