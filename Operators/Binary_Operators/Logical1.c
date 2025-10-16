// Logicals Operators

/*
    && : AND
    || : OR
    ! : NOT
*/

#include <stdio.h>

void main() {

    int x = 10;
    int y = 20;

    printf("x && y : %d\n", x&&y);      //1
    printf("x || y : %d\n", x||y);      //1

    printf("1 && 0 : %d\n", 1 && 0);    //0
    printf("1 || 0 : %d\n", 1 || 0);    //1


    printf("0 && 0 : %d\n", 0 && 0);    //0
    printf("0 || 0 : %d\n", 0 || 0);    //0

}