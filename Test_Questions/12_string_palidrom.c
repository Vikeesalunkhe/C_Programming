#include <stdio.h>

int my_len(char str[])
{
    int count = 0;

    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}

int ispalindrom(char str[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char str[] = "vikerekiv";

    int len = my_len(str);

    printf("string len : %d\n", len);
    if (ispalindrom(str, len))
    {
        printf("yes string is palindrome\n");
    }
    else
    {
        printf("no not palindrome\n");
    }
}