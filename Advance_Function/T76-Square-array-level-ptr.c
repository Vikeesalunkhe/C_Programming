#include <stdio.h>

void square(int **ptr)
{
    for (int i = 0; i<3; i++){
        *(*(ptr + i)) = (*(*(ptr + i))) * (*(*(ptr + i)));
    }
}

int main(){
    int a = 2, b = 3, c = 4;

    int *arr[3] = {&a, &b, &c};

    square(arr);

    printf("After Squaring : \n");
    printf("a : %d\n", a);
    printf("a : %d\n", c);
    printf("a : %d\n", b);
}