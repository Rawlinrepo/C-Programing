#include <stdio.h>

int main()
{
    char str[] = {"abcdefg"};
    printf("the length of the string is : %d\n",(sizeof(str) / sizeof(str[0])) - 1);
}
