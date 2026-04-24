#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int sum = 0;
    
    for (int i = 0; i<count; i++){
        sum += va_arg(args, int);
    }

    va_end(args);
    return sum;
}

int main(){

    int result;

    result = sum(4, 10, 20, 30, 40);
    printf("Result = %d\n", result);


    result = sum(6, 10, 20, 30, 40, 50, 60);
    printf("Result = %d\n", result);


}