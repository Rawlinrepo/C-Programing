#include <stdio.h>

int main()
{
    char str[] = {"abcdefg"};
    printf("%d\n",sizeof(str));
    printf("----------\n");
    int cnt = 0;
    for (int j = 0; j < (sizeof(str) / sizeof(str[0])) - 2; j++)
    {
        printf("%c", str[(sizeof(str) / sizeof(str[0])) - 2 -j]);
    }
}
