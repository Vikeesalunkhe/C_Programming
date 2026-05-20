#include <stdio.h>

void revers(char str[], int start, int end){
    if (start >= end){
        return;
    }

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    revers(str, start+1, end-1);
}

int main(){
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]", str);

    int length = 0;
    for (int i = 0; str[i] != '\0'; i++){
        length++;
    }   

    revers(str, 0, length-1);
    printf("Reversed string is : %s\n", str);


}