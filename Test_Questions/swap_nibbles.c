#include <stdio.h>

#define SWAP_NIBBLE(x) (((x) << 4) | ((x) >> 4))

int main()
{
    unsigned char num;
    
    printf("Enter number : ");
    scanf("%hhx", &num);

    unsigned char res = (num << 4) | (num >> 4);
    printf("After swapping nibbles : %X\n", res);

    unsigned char num1;
    printf("Enter number : ");
    scanf("%hhx", &num1);

    printf("After swapping nibbles using macro : %X\n", SWAP_NIBBLE(num1));

    return 0;
}