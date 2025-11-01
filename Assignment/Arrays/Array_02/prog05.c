//Write a Program to create an interger N numbers of Array Where no is leass than 5 if user eneterd grater than 5 then reenter the no., print the Array.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    int arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%d", &(arr[i]));

        if (arr[i] >=6) {

                    printf("Re-Enter Array Element for %d index becose No. is greater than 6 : ", i);
                    scanf("%d", &(arr[i]));

        }
    }

    printf("Array Created Sucseccfully \n");

    for (int i = 0; i<size; i++) {

        printf("%d\n", arr[i]);
    }

}