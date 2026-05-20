#include <stdio.h>

int main(){

    int num;
    printf("Enter how many prime numbers you want : ");
    scanf("%d", &num);

    int count = 0;
    for (int i = 1; i<num; i++){

        for (int j = 1; j<=i; j++){

            if (i % j == 0){
                count++;
            }
        }
        if (count == 2){
            printf("%d ", i);
        }
        count = 0;
    }

}