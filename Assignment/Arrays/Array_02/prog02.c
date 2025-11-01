////Write a Program to create an Character N numbers of Array, print the ASCII value of characters.


#include <stdio.h>

void main() {

    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    printf("Array size is : %d\n", size);

    char arr[size];
    getchar();

    for (int i = 0; i < size; i++) {

        printf("Enter Array Character for %d index : ", i);
        scanf("%c", &(arr[i]));
        getchar();
    }

    printf("Array Created Sucseccfully \n");

    for (int i = 0; i<size; i++) {

        printf("%d\n", arr[i]);
    }

}