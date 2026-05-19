#include <stdio.h>

#define mydatatype(num)  (char*)(&num + 1) - (char*)(&num)

int main(){

    int inttype = 0;

    printf("%ld\n", mydatatype(inttype));


}