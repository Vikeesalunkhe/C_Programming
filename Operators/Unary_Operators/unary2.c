// Pre and post increment and decrement operators in C


#include <stdio.h>

void main() {

    int x = 10;
    int y = 10;
    int ans = 0;

    ans = ++x + x++;                                              
    printf("Pre-increment: x is : %d, ans is : %d\n", x, ans);        // x becomes 12, ans is 23

    ans = y++ + ++y;
    printf("Post-increment: y is : %d, ans is : %d\n", y, ans);        // y becomes 12, ans is 22

    x = 10; // Reset x
    y = 10; // Reset y

    ans = --x + x--;
    printf("Pre-decrement: x is : %d, ans is : %d\n", x, ans);        // x becomes 8, ans is 17

    ans = y-- + --y;
    printf("Post-decrement: y is : %d, ans is : %d\n", y, ans);        // y becomes 8, ans is 18


}
