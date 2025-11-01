//Write a Program to create an interger N numbers of Array Where no is leass than 5.5 height and no greater that 6 ft, if user eneterd grater than 6 and less than 5.5 then reenter the height., print the Array.



#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array is is : %d\n", size);

    float arr[size];

    for (int i = 0; i < size; i++) {

        printf("Enter Array Element for %d index : ", i);
        scanf("%f", &(arr[i]));

        if (arr[i] <=6 && arr[i] >5) {

                    printf("Re-Enter Array Element for %d index becose No. is greater than 6 : ", i);
                    scanf("%f", &(arr[i]));

        }
    }

    printf("Array Created Sucseccfully \n");

    for (int i = 0; i<size; i++) {

        printf("%f\n", arr[i]);
    }

}