//Relatinoals

/*
    < : less than
    > : Greater than
    <= : less then equal to
    >= : Greater than equal to
    == : Equal to
    != : Not Equal to
*/

#include <stdio.h>

void main() {

    int x = 10;
    int y = 20;

    printf("x < y = %d\n", x<y);        //1
    printf("x > y = %d\n", x>y);        //0
    printf("x <= y = %d\n", x<=y);      //1
    printf("x >= y = %d\n", x>=y);      //0
    printf("x == y = %d\n", x==y);      //0
    printf("x != y = %d\n", x!=y);      //1
}