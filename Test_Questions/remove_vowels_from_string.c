#include <stdio.h>

void remove_vowels(char str[], char temp[]){

    int i = 0;
    int j = 0;

    for (i = 0; str[i] != '\0'; i++){
    
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || 
            str[i] == 'O' || str[i] == 'U' || 
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u'){
                continue;

            
        }
        else{
            temp[j++] = str[i];
        }
    }

    temp[j] = '\0';
}

int main(){

    char str[100];
    char temp[100];

    printf("Enter string : ");
    scanf("%[^\n]", str);

    remove_vowels(str, temp);

    printf("Removed vowels string is : %s\n", temp);
}
