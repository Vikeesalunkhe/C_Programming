#include <stdio.h>
#include <stdlib.h>

int my_strlen(char *ptr)
{
    printf("%s\n", ptr);
    int count = 0;
    while (*ptr != '\0'){
        count++;
        *ptr++;
    }

    return count;
}

char *my_strdup(char *ptr){

    int len = 0;
    len = my_strlen(ptr);
    printf("str len : %d\n", len);

    char *new = malloc(len * sizeof(char));
    if (new == NULL){
        return NULL;
    }
    int i = 0;
    for (i = 0; i<len; i++){
        new[i] = ptr[i];
    }

    new[i] = '\0';

    return new;
}

int main()
{
    char str[100];
    printf("Enter string : ");
    scanf("%[^\n]", str);

    char *ptr = my_strdup(str);

    if (ptr == NULL)
        printf("memory Allocation Failed \n");
        return 0;
        
    printf("String on new memory dumped : %s", ptr);

    free(ptr);

    return 0;
}