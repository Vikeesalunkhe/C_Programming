#include <stdio.h>

int main(){

    int num = 101201;

    int temp = 0;

    while (num != 0){

        int rem = num % 10;
        temp = temp * 10 + rem;
        num = num / 10;
    }

    if (temp == 1001){
        printf("Palindrome number\n");
    }
    else{
        printf("Not palindrome number\n");
    }
}