#include <stdio.h>

int sun(int x, int y) {

    return x+y;
}

void main() {

    int add = sun(10, 20);

    printf("sun is : %d\n", add);
}