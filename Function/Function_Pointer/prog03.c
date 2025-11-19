#include <stdio.h>

int sum(int x, int y) {

    return x+y;
}

int sub(int x, int y) {

    return x-y;
}

int mul(int x, int y) {

    return x*y;
}

int div(int x, int y) {

    return x/y;
}

void main() {

    int (*ptr[4])(int,int)= {sum,sub,mul,div};

    for (int i = 0; i<4; i++) {

        printf("%d\n", ptr[i](20, 10));
    }
}